@class IOKConnection, IOKNotificationPort, IOKInterestNotification, IOKService;

@interface TSKernelClock : TSClock {
    IOKService *_service;
    IOKConnection *_connection;
    IOKNotificationPort *_notificationPort;
    IOKInterestNotification *_interestNotification;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serviceLock;
}

@property (readonly, nonatomic) IOKService *service;
@property (readonly, nonatomic) IOKConnection *connection;

+ (id)diagnosticInfoForService:(id)a0;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;
+ (id)clockNameForClockIdentifier:(unsigned long long)a0;
+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)a0;
+ (id)availableKernelClockIdentifiers;
+ (id)serviceForClockIdentifier:(unsigned long long)a0;

- (BOOL)convertFromTimeSyncTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (BOOL)convertFromDomainTime:(unsigned long long *)a0 toMachAbsoluteTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (BOOL)convertFromMachAbsoluteTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (double)hostRateRatio;
- (int)_lockState;
- (unsigned long long)convertFromDomainToTimeSyncTime:(unsigned long long)a0;
- (BOOL)registerAsyncCallback;
- (void)_handleNotification:(unsigned int)a0 withArg1:(unsigned long long)a1 andArg2:(unsigned long long)a2;
- (BOOL)convertFromDomainTime:(unsigned long long *)a0 toTimeSyncTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromTimeSyncToDomainTime:(unsigned long long)a0;
- (id)diagnosticDescriptionWithIndent:(id)a0;
- (unsigned long long)convertFromDomainIntervalToTimeSyncTimeInterval:(unsigned long long)a0;
- (unsigned long long)convertFromTimeSyncTimeIntervalToDomainInterval:(unsigned long long)a0;
- (void)_handleInterestNotification:(unsigned int)a0 withArgument:(void *)a1;
- (BOOL)getTimeSyncTimeRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 timeSyncAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)a0;
- (void)_handleNotification:(unsigned int)a0 withArgs:(unsigned long long *)a1 ofCount:(unsigned int)a2;
- (BOOL)getMachAbsoluteRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 machAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)a0;
- (BOOL)deregisterAsyncCallback;
- (id)clockName;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)a0;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
