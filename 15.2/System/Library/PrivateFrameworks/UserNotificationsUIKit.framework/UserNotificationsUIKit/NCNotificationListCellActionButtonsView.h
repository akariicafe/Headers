@class UIStackView, NSArray, _UIStatesFeedbackGenerator, NSString, UIView, NCNotificationListCellActionButton;

@interface NCNotificationListCellActionButtonsView : UIView <PLContentSizeCategoryAdjusting, MTMaterialGrouping>

@property (retain, nonatomic) UIView *clippingView;
@property (retain, nonatomic) UIStackView *buttonsStackView;
@property (retain, nonatomic) NCNotificationListCellActionButton *defaultActionButton;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *defaultActionFeedbackGenerator;
@property (nonatomic) BOOL didPlayHaptic;
@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) BOOL highlightDefaultActionButton;
@property (nonatomic) double stretchedWidth;
@property (readonly, nonatomic) double defaultWidth;
@property (nonatomic) long long backgroundMaterialRecipe;
@property (readonly, nonatomic) BOOL shouldPerformDefaultAction;
@property (nonatomic) BOOL shouldVerticallyStackButtons;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *materialGroupNameBase;

- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)senderForActionWithIdentifier:(id)a0;
- (void)_configureClippingViewIfNecessary;
- (void)_configureButtonsStackViewIfNecessary;
- (void)_layoutButtonsStackView;
- (void)_layoutClippingView;
- (void)_configureActionButtonsWithActions:(id)a0;
- (double)_maxAllowedButtonWidth;
- (unsigned long long)_widthMultipleForVerticallyStackedButtonsWithCount:(unsigned long long)a0;
- (void)_configureDefaultWidth;
- (void)_hideNonDefaultActionButtons;
- (void)_revealNonDefaultActionButtons;
- (void)_performNonDefaultActionButtonsHideRevealAnimation:(id /* block */)a0;
- (void)_actuateFeedbackForDefaultActionLockedIfNecessary;
- (void)_actuateFeedbackForDefaultActionUnlockedIfNecessary;
- (void)_configureDefaultActionFeedbackIfNecessary;

@end
