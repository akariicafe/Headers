@class HMFTimer, NSString, HMFUnfairLock;
@protocol HMFStagedValueDelegate;

@interface HMFStagedValue : NSObject <HMFLogging, HMFTimerDelegate> {
    id _stagedValue;
    BOOL _isStaged;
    HMFUnfairLock *_lock;
}

@property (retain) id committedValue;
@property (retain) HMFTimer *timer;
@property (copy) id /* block */ timerFactory;
@property (readonly) id value;
@property (weak) id<HMFStagedValueDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (void)_commitValue:(id)a0;
- (id)initWithValue:(id)a0;
- (void)stageValue:(id)a0 withTimeout:(double)a1;
- (void)commitValue:(id)a0;
- (void)_stageValue:(id)a0 withTimeout:(double)a1;
- (void)_unstageValue;

@end
