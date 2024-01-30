@class UITraitCollection, UIAlertControllerDescriptor, UIInterfaceActionVisualStyle;

@interface UIAlertControllerVisualStyle : NSObject

@property (nonatomic) long long forcedInterfaceIdiom;
@property (readonly, nonatomic) UIInterfaceActionVisualStyle *interfaceActionVisualStyle;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (retain, nonatomic) UIAlertControllerDescriptor *descriptor;

+ (void)positionContentsOfAlertController:(id)a0 alertContentView:(id)a1 availableSpaceView:(id)a2 visualStyle:(id)a3 updatableConstraints:(id)a4;
+ (long long)interfaceActionPresentationStyle;

- (void)animateRevealOfAlertControllerView:(id)a0 alertController:(id)a1 inContainerView:(id)a2 duration:(double)a3 completionBlock:(id /* block */)a4;
- (double)_scaledMarginAboveTitleLabelFirstBaselineInAlertControllerView:(id)a0 titleText:(id)a1;
- (Class)interfaceActionVisualStyleClassForManagingConcreteVisualStyle;
- (double)_scaledSafeBaselineHeightForLabelFont:(id)a0 inAlertControllerView:(id)a1;
- (id)interactionProgressForTransitionOfType:(long long)a0 forAlertController:(id)a1;
- (BOOL)transitionOfType:(long long)a0 shouldBeInteractiveForAlertController:(id)a1;
- (id)init;
- (double)_scaledTitleLabelSafeBaselineHeightInAlertControllerView:(id)a0;
- (double)_scaledMessageSafeBaselineHeightInAlertControllerView:(id)a0;
- (double)maximumWidth;
- (double)marginAboveTitleLabelFirstBaseline;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })minimumActionContentSize;
- (id)_detailMessageFont;
- (double)_scaledMarginAboveDetailMessageFirstBaseline;
- (double)_scaledMarginAboveMessageLabelFirstBaseline;
- (double)_scaledMarginBelowMessageLabelLastBaseline;
- (double)_scaledMarginBelowTitleLabelLastBaseline;
- (double)_scaledMarginBelowLastLabelLastBaseline;
- (double)_spacingBetweenDismissButtonAndContent;
- (id)_keyCommandInputForCancelAction;
- (double)marginBelowTitleLabelLastBaseline;
- (void)_reloadInterfaceActionVisualStyle;
- (BOOL)shouldPreserveRespondersAcrossWindows;
- (void)configureAttributesForImageView:(id)a0 imageProperty:(id)a1 actionViewState:(id)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })contentInsetsForContainerView:(id)a0;
- (double)actionWidthForMinimumActionWidth:(double)a0;
- (id)vibrancyEffectForTitleAndMessageLabel;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })actionSequenceEdgeInsets;
- (id)messageLabelColor;
- (double)maximumHeightForDisplayOnScreen:(id)a0;
- (double)textFieldHorizontalMargin;
- (double)maximumWidthForTitleAndMessageContentView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })textFieldContentInset;
- (BOOL)placementAvoidsKeyboard;
- (BOOL)isEqual:(id)a0;
- (id)titleLabelFont;
- (long long)maximumNumberOfLinesInTitleLabel;
- (id)titleLabelColor;
- (BOOL)shouldOccludeDuringPresentation;
- (double)marginAboveMessageLabelFirstBaseline;
- (double)_marginAboveDetailMessageFirstBaseline;
- (void)configureAttributesForTitleLabel:(id)a0 classificationLabel:(id)a1 actionViewState:(id)a2;
- (void)animateAlertControllerView:(id)a0 ofAlertController:(id)a1 forPresentation:(BOOL)a2 inContainerView:(id)a3 descendantOfContainerView:(id)a4 duration:(double)a5 completionBlock:(id /* block */)a6;
- (double)transitionDurationForPresentation:(BOOL)a0 ofAlertController:(id)a1;
- (id)messageLabelFont;
- (struct CGSize { double x0; double x1; })collectionViewOutsetSize;
- (id)dimmingViewForAlertController:(id)a0;
- (double)marginBelowLastLabelLastBaseline;
- (double)_marginAroundActionGroup;
- (id)tintColorForAlertController:(id)a0;
- (double)minimumWidth;
- (id)textFieldContainingViewWithTextField:(id)a0 position:(long long)a1;
- (long long)permittedActionLayoutDirection;
- (BOOL)_shouldReverseActions;
- (BOOL)hideCancelAction:(id)a0 inAlertController:(id)a1;
- (double)contentHorizontalMargin;
- (id)regularActionFont;
- (id)defaultActionFont;
- (double)contentVerticalMargin;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })actionImageMarginForAction;
- (double)marginBelowMessageLabelLastBaseline;
- (id)preferredActionFont;
- (id)preferredActionForActions:(id)a0 suggestedPreferredAction:(id)a1;
- (long long)maximumNumberOfLinesInMessageLabel;

@end
