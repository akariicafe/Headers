@class NCNotificationListHeaderTitleView, NSString, UIControl, NCToggleControl, _UILegibilitySettings;
@protocol NCNotificationListSectionHeaderViewDelegate;

@interface NCNotificationListSectionHeaderView : UIView <NCToggleControlDelegate, NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting> {
    NCToggleControl *_clearButton;
}

@property (retain, nonatomic) NCNotificationListHeaderTitleView *headerTitleView;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (weak, nonatomic) id<NCNotificationListSectionHeaderViewDelegate> delegate;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (readonly, nonatomic) UIControl *clearButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

+ (double)headerHeightWithWidth:(double)a0 title:(id)a1;
+ (struct CGSize { double x0; double x1; })_clearButtonPreferredSize;

- (id)_legibilitySettings;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)_contentSizeCategoryDidChange;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)adjustForLegibilitySettingsChange:(id)a0;
- (void)resetClearButtonStateAnimated:(BOOL)a0;
- (void)_configureClearButtonIfNecessary;
- (void)_configureHeaderTitleViewIfNecessary;
- (void)_layoutClearButton;
- (void)_layoutHeaderTitleView;
- (void)_resetClearButtonStateAnimated:(BOOL)a0;
- (BOOL)dismissModalFullScreenIfNeeded;
- (void)_updateHeaderTitleViewWithLegibilitySettings:(id)a0;
- (void)_handleClearButtonTouchUpInside:(id)a0;
- (void)_handleClearButtonPrimaryActionTriggered:(id)a0;
- (void)_handleClearAll:(id)a0;
- (id)containerViewForToggleControlClickInteractionPresentedContent:(id)a0;
- (void)toggleControlDidBeginClickInteraction:(id)a0;
- (void)toggleControlDidPresentClickInteractionPresentedContent:(id)a0;
- (void)toggleControlDidDismssClickInteractionPresentedContent:(id)a0;

@end
