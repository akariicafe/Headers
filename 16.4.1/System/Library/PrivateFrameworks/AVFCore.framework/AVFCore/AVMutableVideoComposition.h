@class NSArray, AVVideoCompositionCoreAnimationTool, AVMutableVideoCompositionInternal;

@interface AVMutableVideoComposition : AVVideoComposition {
    AVMutableVideoCompositionInternal *_mutableVideoComposition;
}

@property (retain, nonatomic) Class customVideoCompositorClass;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } frameDuration;
@property (nonatomic) int sourceTrackIDForFrameTiming;
@property (nonatomic) struct CGSize { double x0; double x1; } renderSize;
@property (nonatomic) float renderScale;
@property (copy, nonatomic) NSArray *instructions;
@property (retain, nonatomic) AVVideoCompositionCoreAnimationTool *animationTool;
@property (copy, nonatomic) NSArray *sourceSampleDataTrackIDs;

+ (id)videoComposition;
+ (id)videoCompositionWithAsset:(id)a0 applyingCIFiltersWithHandler:(id /* block */)a1;
+ (void)videoCompositionWithAsset:(id)a0 applyingCIFiltersWithHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
+ (id)videoCompositionWithPropertiesOfAsset:(id)a0;
+ (void)videoCompositionWithPropertiesOfAsset:(id)a0 completionHandler:(id /* block */)a1;
+ (id)videoCompositionWithPropertiesOfAsset:(id)a0 prototypeInstruction:(id)a1;
+ (void)videoCompositionWithPropertiesOfAsset:(id)a0 prototypeInstruction:(id)a1 completionHandler:(id /* block */)a2;
+ (id)videoCompositionWithPropertiesOfAsset:(id)a0 videoGravity:(id)a1;

- (id)builtInCompositorName;
- (id)colorPrimaries;
- (id)colorTransferFunction;
- (id)colorYCbCrMatrix;
- (void)setBuiltInCompositorName:(id)a0;
- (void)setColorPrimaries:(id)a0;
- (void)setColorTransferFunction:(id)a0;
- (void)setColorYCbCrMatrix:(id)a0;

@end
