@class TSClock, NSPointerArray, TSXClockManager;

@interface TSClockManager : NSObject {
    TSXClockManager *_implXPC;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebaseInfo;
    NSPointerArray *_clients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
}

@property (readonly, nonatomic) unsigned long long translationClockIdentifier;
@property (readonly, nonatomic) BOOL timeSyncTimeIsMachAbsoluteTime;
@property (readonly, nonatomic) TSClock *timeSyncClock;
@property (readonly, nonatomic) TSClock *translationClock;
@property (readonly, nonatomic) unsigned long long timeSyncTimeClockIdentifier;

+ (void)initialize;
+ (id)clockManager;
+ (id)sharedClockManager;
+ (id)diagnosticInfo;
+ (void)notifyWhenClockManagerIsUnavailable:(id /* block */)a0;
+ (id)keyPathsForValuesAffectingTimeSyncTimeIsMachAbsoluteTime;
+ (id)keyPathsForValuesAffectingTimeSyncTimeClockIdentifier;
+ (id)frameworkClassNameForDaemonClassName:(id)a0;
+ (void)swiftClockManagerIsAvailable:(id /* block */)a0;
+ (void)notifyWhenClockManagerIsAvailable:(id /* block */)a0;
+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)diagnosticDescriptionForClockIdentifier:(unsigned long long)a0 withIndent:(id)a1;
+ (id)keyPathsForValuesAffectingTranslationClockIdentifier;
+ (id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)a0;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)a0;
+ (id)sharedClockManagerSyncWithTimeout:(unsigned long long)a0;

- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)machAbsoluteNanosecondsToTicks:(unsigned long long)a0;
- (BOOL)addgPTPServicesWithError:(id *)a0;
- (BOOL)removeUserFilteredClockWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)nanosecondsToMachAbsolute:(unsigned long long)a0;
- (BOOL)removeTSNCaptureServicesWithError:(id *)a0;
- (id)availableClockIdentifiers;
- (unsigned long long)translationClockIdentifier;
- (BOOL)addTSNCaptureServicesWithError:(id *)a0;
- (BOOL)getConnectionForClockWithClockIdentifier:(unsigned long long)a0 daemonClockClassName:(id *)a1 endpoint:(id *)a2;
- (unsigned long long)machAbsoluteToNanoseconds:(unsigned long long)a0;
- (BOOL)nextAvailableDynamicClockID:(unsigned long long *)a0 error:(id *)a1;
- (unsigned long long)machAbsoluteTicksToNanoseconds:(unsigned long long)a0;
- (id)init;
- (BOOL)releaseDynamicClockID:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)a0 domainInterval:(unsigned long long)a1 usingFilterShift:(unsigned char)a2 isAdaptive:(BOOL)a3 error:(id *)a4;
- (BOOL)timeSyncTimeIsMachAbsoluteTime;
- (id)_impl;
- (BOOL)removegPTPServicesWithError:(id *)a0;
- (BOOL)addMappingFromClockID:(unsigned long long)a0 toCoreAudioClockDomain:(unsigned int *)a1 error:(id *)a2;
- (void)interruptedClockManager;
- (BOOL)getConnectionForPortWithClockIdentifier:(unsigned long long)a0 portNumber:(unsigned short)a1 daemonPortClassName:(id *)a2 endpoint:(id *)a3;
- (id)clockWithClockIdentifier:(unsigned long long)a0;
- (unsigned long long)timeSyncTimeClockIdentifier;
- (void).cxx_destruct;

@end
