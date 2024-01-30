@interface _DPBlacklistManager : NSObject <_DPMaintenance>

+ (BOOL)createRuntimeBlacklistDirectory:(id)a0;
+ (id)keepLatestRuntimeBlacklistInDirectory:(id)a0 compareToSystemBlacklistInDirectory:(id)a1;
+ (unsigned long long)memoryRequiredBySystemBlacklistInDirectory:(id)a0 runtimeBlacklistInDirectory:(id)a1 blacklist:(id)a2;
+ (unsigned long long)memorySizeWithDirectory:(id)a0;
+ (void)processRuntimeBlacklist;
+ (void)processRuntimeBlacklist:(id)a0 systemDirectory:(id)a1 runtimeDirectory:(id)a2 blacklistLengthLimit:(unsigned long long)a3;
+ (BOOL)removeAllFilesFromDirectory:(id)a0;
+ (BOOL)removeBlacklistFileWithKey:(id)a0 fromDirectory:(id)a1;
+ (BOOL)saveBlacklist:(id)a0 forKey:(id)a1 runtimeDirectory:(id)a2;
+ (BOOL)saveBlacklist:(id)a0 knownVersionByKey:(id)a1 systemDirectory:(id)a2 runtimeDirectory:(id)a3;
+ (BOOL)saveBlacklist:(id)a0 systemDirectory:(id)a1 runtimeDirectory:(id)a2 memoryLimit:(unsigned long long)a3;
+ (BOOL)validateBlacklist:(id)a0;

- (void)scheduleMaintenanceWithName:(id)a0 database:(id)a1;

@end
