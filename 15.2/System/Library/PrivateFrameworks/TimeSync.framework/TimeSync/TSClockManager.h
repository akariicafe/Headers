@class TSClock, IOKConnection, NSMutableArray;

@interface TSClockManager : NSObject {
    IOKConnection *_connection;
    NSMutableArray *_clockPersonalities;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebaseInfo;
}

@property (readonly, nonatomic) unsigned long long translationClockIdentifier;
@property (readonly, nonatomic) BOOL timeSyncTimeIsMachAbsoluteTime;
@property (readonly, nonatomic) TSClock *timeSyncClock;
@property (readonly, nonatomic) TSClock *translationClock;
@property (readonly, nonatomic) unsigned long long timeSyncTimeClockIdentifier;

+ (id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)a0;
+ (id)diagnosticInfoForService:(id)a0;
+ (id)diagnosticDescriptionForClockService:(id)a0 withIndent:(id)a1;
+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)sharedClockManagerSyncWithTimeout:(unsigned long long)a0;
+ (id)diagnosticInfoForClockService:(id)a0;
+ (id)sharedClockManager;
+ (void)notifyWhenClockManagerIsAvailable:(id /* block */)a0;
+ (id)defaultClockPersonalities;
+ (id)clockManager;

- (BOOL)getTimeSyncTimeIsMachAbsolute:(BOOL *)a0 error:(id *)a1;
- (id)clockWithClockIdentifier:(unsigned long long)a0;
- (BOOL)getTimeSyncTimeClockID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)removeUserFilteredClockWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)machAbsoluteTicksToNanoseconds:(unsigned long long)a0;
- (BOOL)nextAvailableDynamicClockID:(unsigned long long *)a0 error:(id *)a1;
- (unsigned long long)machAbsoluteNanosecondsToTicks:(unsigned long long)a0;
- (BOOL)addgPTPServicesWithError:(id *)a0;
- (BOOL)removegPTPServicesWithError:(id *)a0;
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)a0 domainInterval:(unsigned long long)a1 usingFilterShift:(unsigned char)a2 isAdaptive:(BOOL)a3 error:(id *)a4;
- (BOOL)addMappingFromClockID:(unsigned long long)a0 toCoreAudioClockDomain:(unsigned int *)a1 error:(id *)a2;
- (void).cxx_destruct;
- (BOOL)removeTSNCaptureServicesWithError:(id *)a0;
- (id)init;
- (BOOL)addTSNCaptureServicesWithError:(id *)a0;
- (id)availableClockIdentifiers;
- (unsigned long long)nanosecondsToMachAbsolute:(unsigned long long)a0;
- (void)addClockPersonality:(id)a0;
- (BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)releaseDynamicClockID:(unsigned long long)a0 error:(id *)a1;
- (void)removeClockPersonality:(id)a0;
- (unsigned long long)machAbsoluteToNanoseconds:(unsigned long long)a0;

@end
