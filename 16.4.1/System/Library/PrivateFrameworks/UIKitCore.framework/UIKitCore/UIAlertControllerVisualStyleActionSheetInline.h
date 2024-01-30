@class _UIPreviewPresentationEffectView, UIVisualEffectView, UIView;

@interface UIAlertControllerVisualStyleActionSheetInline : UIAlertControllerVisualStyleActionSheet

@property (nonatomic) BOOL actionsReversed;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIVisualEffectView *revealEffectView;
@property (retain, nonatomic) _UIPreviewPresentationEffectView *sourceViewSnapshot;

+ (long long)interfaceActionPresentationStyle;
+ (void)positionContentsOfAlertController:(id)a0 alertContentView:(id)a1 availableSpaceView:(id)a2 visualStyle:(id)a3 updatableConstraints:(id)a4;

- (double)minimumWidth;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldOccludeDuringPresentation;
- (double)_actionDescriptiveTextFontSize;
- (BOOL)_shouldReverseActions;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sourceRectForAlertController:(id)a0 inContainerView:(id)a1;
- (void)animateAlertControllerView:(id)a0 ofAlertController:(id)a1 forPresentation:(BOOL)a2 inContainerView:(id)a3 descendantOfContainerView:(id)a4 duration:(double)a5 completionBlock:(id /* block */)a6;
- (void)animateRevealOfAlertControllerView:(id)a0 alertController:(id)a1 inContainerView:(id)a2 duration:(double)a3 completionBlock:(id /* block */)a4;
- (id)dimmingViewForAlertController:(id)a0;
- (BOOL)hideCancelAction:(id)a0 inAlertController:(id)a1;
- (id)interactionProgressForTransitionOfType:(long long)a0 forAlertController:(id)a1;
- (long long)permittedActionLayoutDirection;
- (BOOL)placementAvoidsKeyboard;
- (BOOL)shouldPreserveRespondersAcrossWindows;
- (id)tintColorForAlertController:(id)a0;
- (double)transitionDurationForPresentation:(BOOL)a0 ofAlertController:(id)a1;
- (BOOL)transitionOfType:(long long)a0 shouldBeInteractiveForAlertController:(id)a1;

@end
