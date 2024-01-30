@class _UIPreviewPresentationEffectView, UIVisualEffectView, UIView;

@interface UIAlertControllerVisualStyleActionSheetInline : UIAlertControllerVisualStyleActionSheet

@property (nonatomic) BOOL actionsReversed;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIVisualEffectView *revealEffectView;
@property (retain, nonatomic) _UIPreviewPresentationEffectView *sourceViewSnapshot;

+ (void)positionContentsOfAlertController:(id)a0 alertContentView:(id)a1 availableSpaceView:(id)a2 visualStyle:(id)a3 updatableConstraints:(id)a4;
+ (long long)interfaceActionPresentationStyle;

- (void)animateRevealOfAlertControllerView:(id)a0 alertController:(id)a1 inContainerView:(id)a2 duration:(double)a3 completionBlock:(id /* block */)a4;
- (id)interactionProgressForTransitionOfType:(long long)a0 forAlertController:(id)a1;
- (BOOL)transitionOfType:(long long)a0 shouldBeInteractiveForAlertController:(id)a1;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceRectForAlertController:(id)a0 inContainerView:(id)a1;
- (BOOL)shouldPreserveRespondersAcrossWindows;
- (BOOL)placementAvoidsKeyboard;
- (BOOL)shouldOccludeDuringPresentation;
- (double)_actionDescriptiveTextFontSize;
- (void)animateAlertControllerView:(id)a0 ofAlertController:(id)a1 forPresentation:(BOOL)a2 inContainerView:(id)a3 descendantOfContainerView:(id)a4 duration:(double)a5 completionBlock:(id /* block */)a6;
- (double)transitionDurationForPresentation:(BOOL)a0 ofAlertController:(id)a1;
- (id)dimmingViewForAlertController:(id)a0;
- (id)tintColorForAlertController:(id)a0;
- (double)minimumWidth;
- (long long)permittedActionLayoutDirection;
- (BOOL)_shouldReverseActions;
- (BOOL)hideCancelAction:(id)a0 inAlertController:(id)a1;

@end
