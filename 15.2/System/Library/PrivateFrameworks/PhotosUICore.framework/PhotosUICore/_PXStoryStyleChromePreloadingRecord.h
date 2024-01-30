@protocol PXStoryViewLayoutSpec, PXStoryStyleDescriptor;

@interface _PXStoryStyleChromePreloadingRecord : NSObject

@property (readonly, nonatomic) double screenScale;
@property (readonly, nonatomic) id<PXStoryStyleDescriptor> styleInfo;
@property (readonly, nonatomic) id<PXStoryViewLayoutSpec> viewLayoutSpec;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)initWithScreenScale:(double)a0 styleInfo:(id)a1 viewLayoutSpec:(id)a2;

@end
