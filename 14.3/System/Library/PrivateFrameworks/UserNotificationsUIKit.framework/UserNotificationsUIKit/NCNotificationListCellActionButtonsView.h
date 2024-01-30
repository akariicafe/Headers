@class UIStackView, NSString, _UIStatesFeedbackGenerator, UIView, NCNotificationListCellActionButton;

@interface NCNotificationListCellActionButtonsView : UIView <PLContentSizeCategoryAdjusting, MTMaterialGrouping>

@property (retain, nonatomic) UIView *clippingView;
@property (retain, nonatomic) UIStackView *buttonsStackView;
@property (retain, nonatomic) NCNotificationListCellActionButton *defaultActionButton;
@property (retain, nonatomic) _UIStatesFeedbackGenerator *defaultActionFeedbackGenerator;
@property (nonatomic) BOOL didPlayHaptic;
@property (nonatomic) BOOL highlightDefaultActionButton;
@property (nonatomic) double stretchedWidth;
@property (readonly, nonatomic) double defaultWidth;
@property (nonatomic) long long backgroundMaterialRecipe;
@property (readonly, nonatomic) BOOL shouldPerformDefaultAction;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *materialGroupNameBase;

+ (id)_actionButtonDescriptionsForNotificationRequest:(id)a0 sectionSettings:(id)a1 cell:(id)a2;
+ (id)_openButtonDescriptionForNotificationRequest:(id)a0 cell:(id)a1;

- (BOOL)adjustForContentSizeCategoryChange;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)configureOpenActionButtonForNotificationRequest:(id)a0 cell:(id)a1;
- (void)configureCellActionButtonsForNotificationRequest:(id)a0 sectionSettings:(id)a1 cell:(id)a2;
- (void)_configureClippingViewIfNecessary;
- (void)_configureButtonsStackViewIfNecessary;
- (void)_layoutButtonsStackView;
- (void)_layoutClippingView;
- (void)_configureActionButtonsForActionButtonDescriptions:(id)a0 cell:(id)a1;
- (double)_maxAllowedButtonWidth;
- (BOOL)_shouldVerticallyStackButtons;
- (unsigned long long)_widthMultipleForVerticallyStackedButtonsWithCount:(unsigned long long)a0;
- (void)_configureDefaultWidth;
- (void)_hideNonDefaultActionButtons;
- (void)_revealNonDefaultActionButtons;
- (void)_performNonDefaultActionButtonsHideRevealAnimation:(id /* block */)a0;
- (void)_actuateFeedbackForDefaultActionLockedIfNecessary;
- (void)_actuateFeedbackForDefaultActionUnlockedIfNecessary;
- (void)_configureDefaultActionFeedbackIfNecessary;

@end
