@class NSMutableDictionary, UILabel, UIViewPropertyAnimator, NSMutableArray, UIView, UIScrollView, NSString, UILongPressGestureRecognizer, CCUIContentModuleContext, UIActivityIndicatorView, UIStackView, MTMaterialView, UISelectionFeedbackGenerator, MTVisualStylingProvider, CCUIMenuModuleItemView;

@interface CCUIMenuModuleViewController : CCUIButtonModuleViewController <UIGestureRecognizerDelegate, CCUIContentModuleContentViewController> {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_transformView;
    UIView *_headerSeparatorView;
    UIView *_footerSeparatorView;
    MTMaterialView *_platterMaterialView;
    MTVisualStylingProvider *_visualStylingProvider;
    UIStackView *_menuItemsContainer;
    NSMutableArray *_menuItems;
    NSMutableDictionary *_identiferToActivityIndicatorView;
    UIScrollView *_contentScrollView;
    UIView *_darkeningBackgroundView;
    UIActivityIndicatorView *_busyIndicatorView;
    UILongPressGestureRecognizer *_pressGestureRecognizer;
    UISelectionFeedbackGenerator *_feedbackGenerator;
    BOOL _allowsMenuInteraction;
    BOOL _ignoreMenuItemAtTouchLocationAfterExpanded;
    struct CGPoint { double x; double y; } _touchLocationToIgnore;
    CCUIMenuModuleItemView *_footerButtonView;
    BOOL _shouldShowFooterButton;
    UIView *_customContentView;
    BOOL _customContentViewScrolls;
    BOOL _forceLimitContentSizeCategory;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) unsigned long long actionsCount;
@property (readonly, nonatomic) unsigned long long menuItemCount;
@property (readonly, nonatomic) double headerHeight;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) BOOL hasFooterButton;
@property (nonatomic) unsigned long long minimumMenuItems;
@property (nonatomic) double visibleMenuItems;
@property (nonatomic) unsigned long long indentation;
@property (nonatomic, getter=isBusy) BOOL busy;
@property (nonatomic) BOOL shouldProvideOwnPlatter;
@property (nonatomic) BOOL useTrailingCheckmarkLayout;
@property (nonatomic) BOOL useTrailingInset;
@property (nonatomic) BOOL useTallLayout;
@property (weak, nonatomic) CCUIContentModuleContext *contentModuleContext;
@property (nonatomic) BOOL hideGlyphInHeader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;

+ (id)checkmarkImageForPreferredContentSizeCategory:(id)a0;

- (double)_separatorHeight;
- (id)_titleFont;
- (void)_contentSizeCategoryDidChange;
- (void)setGlyphPackageDescription:(id)a0;
- (void)setGlyphImage:(id)a0;
- (void).cxx_destruct;
- (double)headerHeightForWidth:(double)a0;
- (void)_setupTitleLabel;
- (void)_setupSubtitleLabel;
- (void)_handlePressGesture:(id)a0;
- (id)viewForTouchContinuation;
- (double)_maximumHeight;
- (void)didTransitionToExpandedContentMode:(BOOL)a0;
- (void)_updatePreferredContentSize;
- (id)leadingViewForMenuItem:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)removeAllActions;
- (double)_footerHeight;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)setTitle:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_subtitleFont;
- (void)setCustomContentView:(id)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (double)_desiredExpandedHeight;
- (id)leadingImageForMenuItem:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setMenuItems:(id)a0;
- (void)contentModuleWillTransitionToExpandedContentMode:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)_updateTitleFont;
- (void)viewDidLoad;
- (BOOL)shouldBeginTransitionToExpandedContentModule;
- (void)viewWillLayoutSubviews;
- (BOOL)hasGlyph;
- (id)_busyIndicatorView;
- (void)addActionWithTitle:(id)a0 subtitle:(id)a1 glyph:(id)a2 handler:(id /* block */)a3;
- (void)_updateMenuItemsSeparatorVisiblity;
- (id)_menuItemFromPlaceholderIndex:(unsigned long long)a0;
- (void)_setMenuItems:(id)a0;
- (id)_leadingViewForMenuItem:(id)a0;
- (id)_trailingViewForMenuItem:(id)a0;
- (id)trailingImageForMenuItem:(id)a0;
- (id)trailingViewForMenuItem:(id)a0;
- (double)preferredExpandedContentHeightWithWidth:(double)a0;
- (double)_titleWidthForContainerWidth:(double)a0;
- (BOOL)_shouldHideGlyphForLimitedContentSizeCategory;
- (double)scrollViewContentHeightForWidth:(double)a0;
- (void)_fadeViewsForExpandedState:(BOOL)a0;
- (void)_layoutViewSubviews;
- (void)_layoutGlyphViewForSize:(struct CGSize { double x0; double x1; })a0;
- (double)_aggregateModuleHeight;
- (void)_setForceLimitContentSizeCategory:(BOOL)a0;
- (void)_layoutTransformViewForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutTitleLabelForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutSubtitleLabelForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutBusyIndicatorForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutHeaderSeparatorForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutContentViewForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutFooterSeparatorForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutFooterButtonForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setRootViewClipsToBounds:(BOOL)a0;
- (void)_setTransformViewClipsToBounds:(BOOL)a0;
- (void)_updateSubtitleFont;
- (BOOL)_shouldShowFooterSeparator;
- (void)_setView:(id)a0 clipsToBounds:(BOOL)a1;
- (double)_menuItemsHeightForWidth:(double)a0;
- (BOOL)_toggleSelectionForMenuItem:(id)a0;
- (void)_handleActionTapped:(id)a0;
- (BOOL)_shouldLimitContentSizeCategory;
- (double)_defaultMenuItemHeight;
- (void)_updateLeadingAndTrailingViews;
- (BOOL)_shouldShowFooterChin;
- (void)addActionWithTitle:(id)a0 glyph:(id)a1 handler:(id /* block */)a2;
- (id)menuItemForIdentifier:(id)a0;
- (void)setUseIndentedLayout:(BOOL)a0;
- (void)setFooterButtonTitle:(id)a0 handler:(id /* block */)a1;
- (void)removeFooterButton;
- (void)scrollToTop:(BOOL)a0;
- (double)_contentScaleForSize:(struct CGSize { double x0; double x1; })a0;
- (id)_preferredFontForTextStyle:(id)a0 hiFontStyle:(long long)a1;

@end
