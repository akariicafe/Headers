@class NSString, RBProcessMap, RBSystemPowerAssertion, NSObject;
@protocol RBPowerAssertionManagerDelegate, OS_dispatch_queue;

@interface RBPowerAssertionManager : NSObject <RBPowerAssertionManaging, RBStateCapturing> {
    RBProcessMap *_stateMap;
    RBProcessMap *_assertionMap;
    RBSystemPowerAssertion *_systemAssertion;
    unsigned long long _assertionCount;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (weak, nonatomic) id<RBPowerAssertionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *stateCaptureTitle;

- (id)captureState;
- (void)removeProcess:(id)a0;
- (id)_unitTest_nameOfPowerAssertionForSystem;
- (void)removeStateForProcessIdentity:(id)a0;
- (BOOL)_unitTest_hasSystemPowerAssertion;
- (void)applySystemState:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)didUpdateProcessStates:(id)a0;
- (id)_unitTest_nameOfPowerAssertionForProcess:(id)a0;
- (void)dealloc;
- (void)addProcess:(id)a0;
- (BOOL)_unitTest_hasPowerAssertionForProcess:(id)a0;

@end
