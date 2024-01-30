@protocol PXDisplayAsset, PXStoryDisplayAssetCroppingContext;

@interface PXStoryCachingDisplayAssetCroppingContext : NSObject <PXStoryDisplayAssetCroppingContext> {
    id<PXStoryDisplayAssetCroppingContext> _croppingContext;
    id<PXDisplayAsset> _cachedAsset;
    unsigned long long _cachedOptions;
    long long _cachedFaceCount;
    long long _cachedFeaturedFaceCount;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_cachedNormalizedFaceRects;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)requestIndividualFaceRectsInAsset:(id)a0 options:(unsigned long long)a1 resultHandler:(id /* block */)a2;
- (id)initWithCroppingContext:(id)a0;

@end
