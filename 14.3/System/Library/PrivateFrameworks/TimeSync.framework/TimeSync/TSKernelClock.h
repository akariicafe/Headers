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

+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)clockNameForClockIdentifier:(unsigned long long)a0;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)a0;
+ (id)diagnosticInfoForService:(id)a0;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;
+ (id)availableKernelClockIdentifiers;
+ (id)serviceForClockIdentifier:(unsigned long long)a0;

- (id)clockName;
- (void).cxx_destruct;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (void)dealloc;
- (void)_handleNotification:(unsigned int)a0 withArg1:(unsigned long long)a1 andArg2:(unsigned long long)a2;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)a0 withFlags:(unsigned int *)a1;
- (void)_handleInterestNotification:(unsigned int)a0 withArgument:(void *)a1;
- (int)_lockState;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0 withFlags:(unsigned int *)a1;
- (BOOL)convertFromMachAbsoluteTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (BOOL)convertFromDomainTime:(unsigned long long *)a0 toMachAbsoluteTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)a0;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)a0;
- (BOOL)getRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 machAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (double)hostRateRatio;
- (BOOL)registerAsyncCallback;
- (BOOL)deregisterAsyncCallback;
- (void)_handleNotification:(unsigned int)a0 withArgs:(unsigned long long *)a1 ofCount:(unsigned int)a2;
- (id)diagnosticDescriptionWithIndent:(id)a0;

@end
