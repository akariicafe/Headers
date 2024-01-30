@class NSString, TSXKernelClock;

@interface TSXKernelClockExported : NSObject <TSXKernelClockClientProtocol>

@property (weak, nonatomic) TSXKernelClock *object;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)changedClockMaster;
- (void)resetClock;
- (void)updateLockState:(int)a0;
- (void)updateTimeSyncTime:(unsigned long long)a0 timeSyncInterval:(unsigned long long)a1 domainTime:(unsigned long long)a2 domainInterval:(unsigned long long)a3;

@end
