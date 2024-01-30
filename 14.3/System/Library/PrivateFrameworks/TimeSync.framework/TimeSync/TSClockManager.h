@class IOKConnection, NSMutableArray;

@interface TSClockManager : NSObject {
    IOKConnection *_connection;
    NSMutableArray *_clockPersonalities;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebaseInfo;
}

@property (readonly, nonatomic) unsigned long long machAbsoluteNanosecondClockIdentifier;

+ (id)diagnosticDescriptionForClockService:(id)a0 withIndent:(id)a1;
+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)defaultClockPersonalities;
+ (id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)a0;
+ (id)sharedClockManagerSyncWithTimeout:(unsigned long long)a0;
+ (id)clockManager;
+ (id)sharedClockManager;
+ (void)notifyWhenClockManagerIsAvailable:(id /* block */)a0;

- (id)init;
- (id)clockWithClockIdentifier:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)removegPTPServicesWithError:(id *)a0;
- (id)availableClockIdentifiers;
- (BOOL)addgPTPServicesWithError:(id *)a0;
- (BOOL)releaseDynamicClockID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removeTSNCaptureServicesWithError:(id *)a0;
- (BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)addTSNCaptureServicesWithError:(id *)a0;
- (unsigned long long)machAbsoluteToNanoseconds:(unsigned long long)a0;
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)a0 domainInterval:(unsigned long long)a1 usingFilterShift:(unsigned char)a2 isAdaptive:(BOOL)a3 error:(id *)a4;
- (BOOL)getMachAbsoluteClockID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)addMappingFromClockID:(unsigned long long)a0 toCoreAudioClockDomain:(unsigned int *)a1 error:(id *)a2;
- (BOOL)nextAvailableDynamicClockID:(unsigned long long *)a0 error:(id *)a1;
- (void)addClockPersonality:(id)a0;
- (BOOL)removeUserFilteredClockWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (void)removeClockPersonality:(id)a0;
- (unsigned long long)nanosecondsToMachAbsolute:(unsigned long long)a0;

@end
