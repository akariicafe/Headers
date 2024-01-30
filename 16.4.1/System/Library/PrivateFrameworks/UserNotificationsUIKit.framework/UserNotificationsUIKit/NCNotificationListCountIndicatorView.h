@class _UILegibilitySettings, NSString, SBUILegibilityLabel, NSDate, BSUIFontProvider, UIButton;
@protocol NCNotificationListCountIndicatorViewDelegate;

@interface NCNotificationListCountIndicatorView : UIView <NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting> {
    UIButton *_titleLabelButton;
    SBUILegibilityLabel *_titleLabel;
    SBUILegibilityLabel *_notificationCountLabel;
    _UILegibilitySettings *_legibilitySettings;
    BSUIFontProvider *_fontProvider;
    BOOL _animateLayoutForContentTransition;
    NSDate *_longPressStartTime;
}

@property (weak, nonatomic) id<NCNotificationListCountIndicatorViewDelegate> delegate;
@property (nonatomic) unsigned long long notificationCount;
@property (copy, nonatomic) NSString *titleString;
@property (copy, nonatomic) NSString *symbolImageName;
@property (nonatomic) BOOL shouldAllowLongPressInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

- (id)_fontProvider;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureTitleLabelIfNecessary;
- (void)adjustForLegibilitySettingsChange:(id)a0;
- (id)_titleLabelFont;
- (void)layoutSubviews;
- (BOOL)adjustForContentSizeCategoryChange;
- (void).cxx_destruct;
- (id)_titleString;
- (id)_attributedStringWithText:(id)a0 symbolName:(id)a1 withFont:(id)a2;
- (void)_configureNotificationCountLabelIfNecessary;
- (void)_configureTitleLabelButtonIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_insetBounds;
- (void)_invalidateNotificationCountLabelAnimated:(BOOL)a0;
- (void)_invalidateTitleLabelAnimated:(BOOL)a0;
- (void)_layoutNotificationCountLabelIfNecessary;
- (void)_layoutTitleLabelButtonIfNecessary;
- (void)_layoutTitleLabelIfNecessary;
- (id)_newLegibilityLabelWithTitle:(id)a0 symbolName:(id)a1 withFont:(id)a2;
- (id)_notificationCountLabelFont;
- (id)_notificationCountString;
- (void)_scaleTitleAndSymbolShouldScale:(BOOL)a0;
- (void)_titleButtonTapped:(id)a0;
- (void)_titleButtonTouchDown:(id)a0;
- (void)_titleButtonTouchEnded:(id)a0;
- (void)_updateHighlightingForTitleButton:(id)a0;
- (void)_updateLongPressStateIsActiveTouch:(BOOL)a0;

@end
