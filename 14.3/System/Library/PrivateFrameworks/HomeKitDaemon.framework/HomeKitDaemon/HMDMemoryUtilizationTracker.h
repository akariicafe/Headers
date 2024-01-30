@class NSString, HMFUnfairLock, NSMutableArray;

@interface HMDMemoryUtilizationTracker : NSObject <HMFLogging> {
    HMFUnfairLock *_lock;
    NSMutableArray *_memoryUseSnapshots;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)memoryTracker;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)log;
- (id)dumpState;
- (id)__init;
- (id)snapshots;
- (void)trackMemoryUsageWithReason:(id)a0;

@end
