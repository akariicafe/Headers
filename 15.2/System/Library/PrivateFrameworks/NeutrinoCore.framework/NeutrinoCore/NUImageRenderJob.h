@class CIRenderTask, NUPurgeableStoragePool, NUPurgeableImageAccessGuard, NUImageAccumulationNode, NURegion;
@protocol NUPurgeableImage, NUPurgeableStorage, NUMutablePurgeableImage;

@interface NUImageRenderJob : NURenderJob {
    NUPurgeableImageAccessGuard *_accessRegionGuard;
    NUPurgeableStoragePool *_storagePool;
    id<NUPurgeableStorage> _renderDestination;
}

@property (readonly, nonatomic) NURegion *regionToRender;
@property (readonly, nonatomic) id<NUMutablePurgeableImage> targetImage;
@property (readonly, nonatomic) NURegion *renderedRegion;
@property (readonly, nonatomic) id<NUPurgeableImage> renderedImage;
@property (readonly, nonatomic) NUImageAccumulationNode *imageAccumulationNode;
@property (retain, nonatomic) CIRenderTask *renderTask;

- (id)initWithRequest:(id)a0;
- (BOOL)render:(out id *)a0;
- (void)cleanUp;
- (void).cxx_destruct;
- (BOOL)complete:(out id *)a0;
- (BOOL)prepare:(out id *)a0;
- (id)imageRequest;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (id)scalePolicy;
- (id)newRenderPipelineStateForEvaluationMode:(long long)a0;
- (id)initWithImageRequest:(id)a0;
- (id)imageAccumulationNodeWithImageSize:(struct { long long x0; long long x1; })a0 tileSize:(struct { long long x0; long long x1; })a1 borderSize:(struct { long long x0; long long x1; })a2 format:(id)a3 colorSpace:(id)a4;
- (id)extentPolicy;
- (BOOL)copyStorage:(id)a0 fromRect:(struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; })a1 toImage:(id)a2 atPoint:(struct { long long x0; long long x1; })a3;

@end
