@class NSDictionary, NSString;

@interface WFModuleSummaryComponentController : CKStatefulViewComponentController <WFModuleSummaryViewDelegate, WFComponentEditingSession, WFActionEventObserver>

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
- (id)summaryView;
- (void)actionRunningStateDidChange:(id)a0;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (void)didUpdateComponent;
- (void)didAcquireStatefulView:(id)a0;
- (void)willRelinquishStatefulView:(id)a0;
- (void)summaryViewDidEndEditing:(id)a0;
- (void)summaryViewDidInvalidateSize:(id)a0;
- (void)summaryViewWillBeginEditing:(id)a0;
- (id)viewControllerContainingSummaryView:(id)a0;
- (BOOL)canRelinquishStatefulView;
- (void)reflowWithStagedParameterStates:(id)a0;
- (void)updateColorsForRunningStateAnimated:(BOOL)a0;

@end
