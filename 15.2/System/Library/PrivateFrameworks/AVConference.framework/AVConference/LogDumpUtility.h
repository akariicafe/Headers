@interface LogDumpUtility : NSObject

+ (id)createFileListSortedByTimestamp:(id)a0;
+ (id)getCachesDirectoryPath;
+ (void)removeFilesInDirectory:(id)a0 olderThan:(id)a1;
+ (id)getDefaultLogDumpPath;
+ (id)logFilename:(int)a0 dumpID:(id)a1 logNameType:(int)a2 prefix:(id)a3 suffix:(id)a4;
+ (BOOL)createDirectory:(id)a0;
+ (void)removeOldFilesInDefaultLogDumpPath;

@end
