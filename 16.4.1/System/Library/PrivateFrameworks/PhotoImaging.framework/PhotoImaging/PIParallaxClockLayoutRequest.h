@class PFParallaxLayout;
@protocol PISegmentationItem;

@interface PIParallaxClockLayoutRequest : NURenderRequest

@property (readonly, nonatomic) id<PISegmentationItem> segmentationItem;
@property (retain, nonatomic) PFParallaxLayout *layout;

- (void)submit:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithComposition:(id)a0;
- (void).cxx_destruct;
- (id)initWithSegmentationItem:(id)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;

@end
