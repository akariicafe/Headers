@class WFModuleSummaryCoordinator, NSDictionary, NSString;

@interface WFModuleSummaryComponentController : CKStatefulViewComponentController <WFModuleSummaryCoordinatorDelegate, WFComponentEditingSession, WFActionEventObserver>

@property (retain, nonatomic) WFModuleSummaryCoordinator *coordinator;
@property (nonatomic) BOOL summaryIsEditing;
@property (nonatomic) BOOL shouldReflowWhenComponentRemounted;
@property (retain, nonatomic) NSDictionary *stagedParameterStates;
@property (nonatomic) BOOL actionRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newStatefulView:(id)a0;
+ (void)configureStatefulView:(id)a0 forComponent:(id)a1;
+ (double)heightForComponent:(id)a0 withWidth:(double)a1;

- (void).cxx_destruct;
- (void)actionRunningStateDidChange:(id)a0;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (id)viewControllerForCoordinator:(id)a0;
- (void)summaryCoordinatorDidInvalidateSize:(id)a0;
- (void)summaryCoordinatorWillBeginEditing:(id)a0;
- (void)summaryCoordinatorDidEndEditing:(id)a0;
- (void)didAcquireStatefulView:(id)a0;
- (void)willRelinquishStatefulView:(id)a0;
- (BOOL)canRelinquishStatefulView;
- (void)didUpdateComponent;
- (void)reflowWithStagedParameterStates:(id)a0;
- (void)updateColorsForRunningStateAnimated:(BOOL)a0;

@end
