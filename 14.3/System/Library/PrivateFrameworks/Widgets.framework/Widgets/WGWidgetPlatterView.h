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

- (struct CGSize { double x0; double x1; })_contentSize;
- (double)_continuousCornerRadius;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)willRemoveSubview:(id)a0;
- (void)_handleIconButton:(id)a0;
- (void)_setContinuousCornerRadius:(double)a0;
- (void)_layoutContentView;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)_updateUtilityButtonForMoreContentState:(BOOL)a0;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (struct CGSize { double x0; double x1; })minimumSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_headerFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_handleAddWidget:(id)a0;
- (BOOL)_isUtilityButtonVisible;
- (void)iconDidInvalidate:(id)a0;
- (void)_updateHeaderContentViewVisualStyling;
- (void)layoutSubviews;
- (void)_configureHeaderViewsIfNecessary;
- (struct CGSize { double x0; double x1; })contentSizeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updateUtilityButtonForMode:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateShowMoreButtonImage;
- (id)cancelTouches;
- (void)_toggleShowMore:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setUtilityButtonVisible:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFitsContentWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void)_layoutHeaderViews;

@end
