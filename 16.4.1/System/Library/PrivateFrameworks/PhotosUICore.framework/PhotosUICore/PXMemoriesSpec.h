@class UIColor, UIFont;

@interface PXMemoriesSpec : PXFeatureSpec

@property (readonly, nonatomic) unsigned long long _style;
@property (readonly, nonatomic) double _displayScale;
@property (readonly, nonatomic) double _columnWidth;
@property (readonly, nonatomic) UIColor *feedBackgroundColor;
@property (readonly, nonatomic) UIColor *selectionHighlightColor;
@property (readonly, nonatomic) long long feedHeroPosition;
@property (readonly, nonatomic) long long feedAxis;
@property (readonly, nonatomic) unsigned long long feedMemoriesPerRow;
@property (readonly, nonatomic) long long feedSectionLayoutAxis;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } feedEntryEdgeInsets;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } layoutInsets;
@property (readonly, nonatomic) BOOL feedShouldAllowHeaders;
@property (readonly, nonatomic) double feedEntryHeaderHeight;
@property (readonly, nonatomic) double firstFeedEntryHeaderHeight;
@property (readonly, nonatomic) double distanceBetweenHeaderBaselineAndImageTop;
@property (readonly, nonatomic) double feedHeroImagePaddingTop;
@property (readonly, nonatomic) double feedHeroImagePaddingBottom;
@property (readonly, nonatomic) double feedSecondaryImagePaddingBottom;
@property (readonly, nonatomic) double feedInteritemSpacing;
@property (readonly, nonatomic) long long idiom;
@property (readonly, nonatomic) Class feedDataSourceManagerClass;
@property (readonly, nonatomic) Class feedLayoutMetricsClass;
@property (readonly, nonatomic) Class feedTransitionAnimationCoordinatorClass;
@property (readonly, nonatomic) double feedHeroImageAspectRatio;
@property (readonly, nonatomic) struct CGSize { double width; double height; } favoriteBadgeSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } favoriteBadgeInset;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } highlightedSectionHeaderOffset;
@property (readonly, nonatomic) BOOL shouldRemoveHighlightOnScroll;
@property (readonly, nonatomic) double bottomShadowPadding;
@property (readonly, nonatomic) double feedAdditionalContentThreshold;
@property (readonly, nonatomic) UIFont *tabTitleFont;
@property (readonly, nonatomic) UIColor *tabTitleTextColor;
@property (readonly, nonatomic) double tabTitleBaselineOffset;
@property (readonly, nonatomic) double tabTopContentPadding;
@property (readonly, nonatomic) UIColor *borderColor;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } borderOffset;
@property (readonly, nonatomic) double borderWidth;
@property (readonly, nonatomic) double orbPreviewSize;

- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)_calculateSectionInsetWithExtendedTraitCollection:(id)a0;
- (double)_feedInteritemSpacingForReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor { long long x0; unsigned long long x1; struct CGSize { double x0; double x1; } x2; })a0;
- (id)feedCategoryLabelTextColor;
- (id)initWithExtendedTraitCollection:(id)a0 options:(unsigned long long)a1 style:(unsigned long long)a2;
- (id)newLayoutGeneratorWithMetrics:(id)a0;

@end
