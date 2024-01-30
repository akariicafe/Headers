@class NSShadow, PXGridLayoutMetrics;

@interface PXStoryHorizontalGadgetViewLayoutSpec : NSObject <PXStoryFeedViewLayoutSpec> {
    PXGridLayoutMetrics *_cachedGridLayoutMetrics;
}

@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double itemAspectRatio;
@property (readonly, nonatomic) struct { long long axis; long long decelerationRate; BOOL pagingEnabled; double pagingOrigin; double pageOffset; BOOL allowingFlickAcrossMultiplePages; } scrollBehavior;
@property (readonly, nonatomic) BOOL wantsScrollIndicators;
@property (readonly, nonatomic) double itemCornerRadius;
@property (readonly, nonatomic) NSShadow *itemShadow;
@property (readonly, nonatomic) long long numberOfColumns;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } viewOutsets;
@property (nonatomic) BOOL isFullScreen;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithGadgetSpec:(id)a0;
- (id)layoutGeneratorWithReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (id)_metricsWithReferenceSize:(struct CGSize { double x0; double x1; })a0;

@end
