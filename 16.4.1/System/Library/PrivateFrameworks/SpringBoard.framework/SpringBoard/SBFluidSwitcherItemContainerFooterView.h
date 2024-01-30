@class BSUIEmojiLabelView, NSString, NSArray, SBMedusaSettings, NSMutableArray, UITapGestureRecognizer;
@protocol SBFluidSwitcherItemContainerFooterViewDelegate;

@interface SBFluidSwitcherItemContainerFooterView : SBFTouchPassThroughView <PTSettingsKeyObserver, UIPointerInteractionDelegate> {
    NSMutableArray *_iconViews;
    NSMutableArray *_titleLabels;
    BSUIEmojiLabelView *_subtitleLabel;
    long long _subtitleStylingUserInterfaceStyle;
    NSArray *_titleItems;
    NSArray *_visibleTitleItems;
    UITapGestureRecognizer *_tapGestureRecognizer;
    SBMedusaSettings *_settings;
}

@property (readonly, weak, nonatomic) id<SBFluidSwitcherItemContainerFooterViewDelegate> delegate;
@property (nonatomic) unsigned long long footerStyle;
@property (nonatomic) double textAlpha;
@property (nonatomic) unsigned long long iconAlignment;
@property (nonatomic) BOOL uniqueIconsOnly;
@property (nonatomic) BOOL wantsIconPointerInteractions;
@property (nonatomic) double iconHitTestOutset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (void)_handleTapGestureRecognizer:(id)a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_contentSizeCategoryDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)layoutSubviews;
- (void)setTitleItems:(id)a0 animated:(BOOL)a1;
- (void)_updateLabels;
- (void).cxx_destruct;
- (void)_updateSubtitleLabel;
- (BOOL)_hasTitleShadow;
- (id)_attributedTextFromText:(id)a0;
- (BOOL)_isTextEffectivelyEmpty:(id)a0;
- (id)_makeIconView;
- (id)_makeLabel;
- (id)_makeSubtitleLabel;
- (double)_maximumTitleLabelHeight;
- (void)_reloadVisibleTitleItems;
- (void)_updateIconPointerInteractions;
- (void)_updateIconViewShadow:(id)a0;
- (void)_updateIconViewsAndLabels;

@end
