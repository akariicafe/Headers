@class UIView, NSString, NSArray, WGPlatterHeaderContentView, WGWidgetHostingViewController, UIButton, WGWidgetListItemViewController, MTMaterialView;

@interface WGWidgetPlatterView : UIView <PLContentSizeManaging, PLContentSizeCategoryAdjusting, MTMaterialGrouping, MTVisualStylingRequiring> {
    MTMaterialView *_backgroundView;
    WGPlatterHeaderContentView *_headerContentView;
    double _cornerRadius;
}

@property (retain, nonatomic, setter=_setContentView:) UIView *contentView;
@property (weak, nonatomic) WGWidgetHostingViewController *widgetHost;
@property (weak, nonatomic) WGWidgetListItemViewController *listItem;
@property (nonatomic, getter=isContentViewHitTestingDisabled) BOOL contentViewHitTestingDisabled;
@property (nonatomic) unsigned long long clippingEdge;
@property (nonatomic, getter=isBackgroundHidden) BOOL backgroundHidden;
@property (nonatomic) double overrideHeightForLayingOutContentView;
@property (nonatomic) double topMarginForLayout;
@property (nonatomic) long long buttonMode;
@property (readonly, nonatomic) UIButton *showMoreButton;
@property (nonatomic, getter=isShowingMoreContent) BOOL showingMoreContent;
@property (nonatomic, getter=isShowMoreButtonVisible) BOOL showMoreButtonVisible;
@property (readonly, nonatomic) UIButton *addWidgetButton;
@property (nonatomic, getter=isAddWidgetButtonVisible) BOOL addWidgetButtonVisible;
@property (nonatomic, getter=isEditingIcons) BOOL editingIcons;
@property (readonly, copy, nonatomic) NSString *widgetIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;

+ (double)contentBaselineToBoundsBottomWithWidth:(double)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_contentSize;
- (BOOL)adjustForContentSizeCategoryChange;
- (BOOL)canBecomeFocused;
- (void)_layoutHeaderViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)willRemoveSubview:(id)a0;
- (void)_layoutContentView;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (double)_continuousCornerRadius;
- (void)_setContinuousCornerRadius:(double)a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)cancelTouches;
- (void)_handleIconButton:(id)a0;
- (void)iconDidInvalidate:(id)a0;
- (void)_updateUtilityButtonForMode:(long long)a0;
- (void)_configureHeaderViewsIfNecessary;
- (BOOL)_isUtilityButtonVisible;
- (void)_setUtilityButtonVisible:(BOOL)a0;
- (void)_updateUtilityButtonForMoreContentState:(BOOL)a0;
- (void)_updateShowMoreButtonImage;
- (void)_updateHeaderContentViewVisualStyling;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_headerFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handleAddWidget:(id)a0;
- (void)_toggleShowMore:(id)a0;
- (struct CGSize { double x0; double x1; })minimumSizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
