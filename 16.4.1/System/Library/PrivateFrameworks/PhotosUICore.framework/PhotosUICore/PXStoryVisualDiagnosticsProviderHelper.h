@class PXMediaProvider, PXStoryConfiguration;
@protocol PXStoryDisplayAssetCroppingContext;

@interface PXStoryVisualDiagnosticsProviderHelper : NSObject

@property (readonly, nonatomic) PXStoryConfiguration *configuration;
@property (readonly, nonatomic) double contentsScale;
@property (readonly, nonatomic) id<PXStoryDisplayAssetCroppingContext> croppingContext;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)drawAsset:(id)a0 contentsRect:(struct { struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x0; })a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 context:(id)a3;
- (void)drawAsset:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(id)a2;
- (void)drawCropRectsForAsset:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(id)a2 configuration:(id /* block */)a3;
- (void)drawSegmentOfTimeline:(id)a0 withIdentifier:(long long)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 context:(id)a3;

@end
