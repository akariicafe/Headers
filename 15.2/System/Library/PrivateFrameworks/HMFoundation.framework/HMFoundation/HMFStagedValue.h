@class HMFTimer, NSString;
@protocol HMFStagedValueDelegate;

@interface HMFStagedValue : NSObject <HMFLogging, HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id _stagedValue;
    BOOL _isStaged;
}

@property (retain) id committedValue;
@property (retain) HMFTimer *timer;
@property (copy) id /* block */ timerFactory;
@property (readonly) id value;
@property (readonly, getter=isStaged) BOOL staged;
@property (weak) id<HMFStagedValueDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;
- (void)_commitValue:(id)a0;
- (void)stageValue:(id)a0;
- (void)commitValue:(id)a0;
- (void)stageValue:(id)a0 withTimeout:(double)a1;
- (void)_stageValue:(id)a0 withTimer:(id)a1;
- (void)_unstageValue;

@end
