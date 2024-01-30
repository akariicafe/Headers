@class UIView, NSString, AVCustomStackLayout, NSArray, AVCABackdropLayerView, NSMutableArray, AVLayoutItemAttributes, UIVisualEffectView;
@protocol AVLayoutViewItem;

@interface AVLayoutView : AVView <AVPlaybackControlsViewItem>

@property (retain, nonatomic) NSMutableArray *flattenedArrangedSubviewsInLayoutOrder;
@property (retain, nonatomic) AVCustomStackLayout *currentStackLayout;
@property (nonatomic, getter=isLayoutDirty) BOOL layoutDirty;
@property (retain, nonatomic) AVCABackdropLayerView *backdropLayerView;
@property (retain, nonatomic) UIVisualEffectView *secondaryMaterialOverlayView;
@property (nonatomic) BOOL stackLayoutNeedsUpdate;
@property (retain, nonatomic) UIView<AVLayoutViewItem> *targetViewForSecondaryMaterialOverlayView;
@property (readonly, copy, nonatomic) NSArray *arrangedSubviews;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } contentLayoutMargins;
@property (nonatomic) unsigned long long shapeStyle;
@property (nonatomic) BOOL prefersLowQualityEffects;
@property (copy, nonatomic) NSString *debugIdentifier;
@property (nonatomic) struct CGSize { double width; double height; } extrinsicContentSize;
@property (nonatomic, getter=isRemoved) BOOL removed;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (nonatomic, getter=isIncluded) BOOL included;
@property (readonly, nonatomic, getter=isCollapsedOrExcluded) BOOL collapsedOrExcluded;
@property (nonatomic) BOOL hasAlternateAppearance;
@property (nonatomic) BOOL hasFullScreenAppearance;
@property (readonly, nonatomic) AVLayoutItemAttributes *layoutAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;

- (void)setNeedsLayout;
- (void)layoutAttributesDidChange;
- (id)init;
- (void)setRowSpacing:(double)a0 afterRow:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_insertArrangedSubview:(id)a0 atIndex:(unsigned long long)a1;
- (void)setBackgroundColor:(id)a0;
- (double)layoutHeightThatFitsRowsStartingWithRow:(unsigned long long)a0;
- (id)prioritizedSizeThatFitsSize:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (id)backgroundColor;
- (void)_removeArrangedSubview:(id)a0;
- (void)setArrangedSubviews:(id)a0;
- (void)reevaluateHiddenStateOfAllItems;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasVisibleArrangedSubview;
- (void)_updateStackLayoutIfNeeded;
- (void)_applyShapeStyle;

@end
