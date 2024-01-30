@class CARPFTimer, NSString, CARPFUnfairLock;
@protocol CARPFStagedValueDelegate;

@interface CARPFStagedValue : NSObject <CARPFLogging, CARPFTimerDelegate> {
    id _stagedValue;
    BOOL _isStaged;
    CARPFUnfairLock *_lock;
}

@property (retain) id committedValue;
@property (retain) CARPFTimer *timer;
@property (copy) id /* block */ timerFactory;
@property (readonly) id value;
@property (weak) id<CARPFStagedValueDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (id)initWithValue:(id)a0;
- (void)_commitValue:(id)a0;
- (void)commitValue:(id)a0;
- (void)stageValue:(id)a0 withTimeout:(double)a1;
- (void)_unstageValue;
- (void)_stageValue:(id)a0 withTimeout:(double)a1;

@end
