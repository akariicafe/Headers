@class NSShadow, PXMemoriesSpec;

@interface PXStoryMemoriesSpecBasedMemoryFeedViewLayoutSpec : NSObject <PXStoryFeedViewLayoutSpec>

@property (readonly, nonatomic) PXMemoriesSpec *memoriesSpec;
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
- (id)layoutGeneratorWithReferenceSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithMemoriesSpec:(id)a0;

@end
