@class UIButton, NCNotificationListHeaderTitleView, NSString, UIControl, NCToggleControl, _UILegibilitySettings;
@protocol NCNotificationListSectionHeaderViewDelegate;

@interface NCNotificationListSectionHeaderView : UIView <NCToggleControlDelegate, NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting> {
    NCToggleControl *_clearButton;
}

@property (retain, nonatomic) NCNotificationListHeaderTitleView *headerTitleView;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) UIButton *collapseButton;
@property (weak, nonatomic) id<NCNotificationListSectionHeaderViewDelegate> delegate;
@property (copy, nonatomic) NSString *sectionIdentifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (readonly, nonatomic) UIControl *clearButton;
@property (nonatomic) BOOL showCollapseButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

+ (struct CGSize { double x0; double x1; })_clearButtonPreferredSize;
+ (struct CGSize { double x0; double x1; })_collapseButtonPreferredSize;
+ (double)headerHeightWithWidth:(double)a0 title:(id)a1 isShowingCollapseButton:(BOOL)a2;

- (void)_contentSizeCategoryDidChange;
- (BOOL)dismissModalFullScreenIfNeeded;
- (void)_layoutClearButton;
- (void)toggleControlDidDismssClickInteractionPresentedContent:(id)a0;
- (void)_configureCollapseButtonIfNecessary;
- (void)resetClearButtonStateAnimated:(BOOL)a0;
- (id)_legibilitySettings;
- (id)containerViewForToggleControlClickInteractionPresentedContent:(id)a0;
- (void)_handleClearButtonTouchUpInside:(id)a0;
- (void)_resetClearButtonStateAnimated:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handleClearAll:(id)a0;
- (void)_layoutHeaderTitleView;
- (void)adjustForLegibilitySettingsChange:(id)a0;
- (void)_layoutCollapseButton;
- (void)layoutSubviews;
- (void)_configureHeaderTitleViewIfNecessary;
- (void)_updateHeaderTitleViewWithLegibilitySettings:(id)a0;
- (void)_handleClearButtonPrimaryActionTriggered:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_handleCollapseActionTriggered:(id)a0;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)_configureClearButtonIfNecessary;
- (void).cxx_destruct;
- (void)toggleControlDidPresentClickInteractionPresentedContent:(id)a0;
- (void)toggleControlDidBeginClickInteraction:(id)a0;

@end
