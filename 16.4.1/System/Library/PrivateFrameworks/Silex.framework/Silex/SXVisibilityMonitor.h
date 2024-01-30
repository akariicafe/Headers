@class NFStateMachine, NSString, NSMutableArray, NFStateMachineState;
@protocol SXVisiblePercentageProviding;

@interface SXVisibilityMonitor : NSObject <SXVisibilityReporting, SXVisibilityMonitoring>

@property (readonly, nonatomic) NFStateMachine *stateMachine;
@property (readonly, nonatomic) NFStateMachineState *appearingState;
@property (readonly, nonatomic) NFStateMachineState *appearedState;
@property (readonly, nonatomic) NFStateMachineState *disappearingState;
@property (readonly, nonatomic) NFStateMachineState *disappearedState;
@property (readonly, nonatomic) NSMutableArray *willAppearBlocks;
@property (readonly, nonatomic) NSMutableArray *didAppearBlocks;
@property (readonly, nonatomic) NSMutableArray *visiblePercentageBlocks;
@property (readonly, nonatomic) NSMutableArray *willDisappearBlocks;
@property (readonly, nonatomic) NSMutableArray *didDisappearBlocks;
@property (nonatomic) double visiblePercentage;
@property (readonly, nonatomic) BOOL locked;
@property (nonatomic) long long lockCount;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) id<SXVisiblePercentageProviding> visiblePercentageProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL appeared;
@property (readonly, weak, nonatomic) id object;

- (void)lock;
- (void)willDisappear;
- (void)unlock;
- (void)didDisappear;
- (void)updateVisibility;
- (void)didAppear;
- (void).cxx_destruct;
- (void)willAppear;
- (void)onDidDisappear:(id /* block */)a0;
- (void)determineVisiblePercentage;
- (id)initWithObject:(id)a0 visiblePercentageProvider:(id)a1;
- (void)onDidAppear:(id /* block */)a0;
- (void)onVisiblePercentageChange:(id /* block */)a0;
- (void)onWillAppear:(id /* block */)a0;
- (void)onWillDisappear:(id /* block */)a0;

@end
