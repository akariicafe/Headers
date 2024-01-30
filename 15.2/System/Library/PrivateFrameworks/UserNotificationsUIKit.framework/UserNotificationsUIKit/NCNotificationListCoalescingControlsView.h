@class NSString, _UILegibilitySettings, NCToggleControlPair;
@protocol NCNotificationListCoalescingControlsViewDelegate;

@interface NCNotificationListCoalescingControlsView : UIView <NCToggleControlDelegate, PLContentSizeCategoryAdjusting, MTMaterialGrouping>

@property (class, readonly, copy, nonatomic) NSString *labelTextStyle;
@property (class, readonly, nonatomic) double preferredHeight;

@property (retain, nonatomic) NCToggleControlPair *toggleControlPair;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, getter=_effectiveButtonHeight) double effectiveButtonHeight;
@property (nonatomic, getter=_effectiveHorizontalPadding) double effectiveHorizontalPadding;
@property (nonatomic, getter=_effectiveVerticalPadding) double effectiveVerticalPadding;
@property (weak, nonatomic) id<NCNotificationListCoalescingControlsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSString *materialGroupNameBase;

- (void)layoutSubviews;
- (double)_cornerRadius;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)_handleClearAll:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)dismissModalFullScreenIfNeeded;
- (id)_clearButton;
- (void).cxx_destruct;
- (void)toggleControlDidDismssClickInteractionPresentedContent:(id)a0;
- (void)resetClearButtonStateAnimated:(BOOL)a0;
- (void)toggleControlDidBeginClickInteraction:(id)a0;
- (void)toggleControlDidPresentClickInteractionPresentedContent:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsets;
- (id)containerViewForToggleControlClickInteractionPresentedContent:(id)a0;
- (BOOL)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_isClearButtonExpanded;
- (void)_configureToggleControlPairIfNecessary;
- (void)_layoutToggleControlPair;
- (double)_effectiveValue:(double)a0;
- (void)_handleRestackTouchUpInside:(id)a0;
- (void)_handleRestackPrimaryAction:(id)a0;
- (void)_handleClearTouchUpInside:(id)a0;
- (void)_handleClearPrimaryAction:(id)a0;
- (id)_newRestackButton;
- (id)_newClearButton;
- (double)_imageDimension;
- (id)_restackButtonTitle;
- (id)_clearButtonTitle;

@end
