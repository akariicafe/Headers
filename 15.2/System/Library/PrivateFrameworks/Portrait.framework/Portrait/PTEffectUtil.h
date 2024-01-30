@protocol MTLComputePipelineState;

@interface PTEffectUtil : NSObject {
    id<MTLComputePipelineState> _updateFocusObject;
    id<MTLComputePipelineState> _effectSampleFaceRects;
    id<MTLComputePipelineState> _convertToDisparity;
    id<MTLComputePipelineState> _enforceFixedFocusDistance;
    id<MTLComputePipelineState> _copySingleChannel;
    id<MTLComputePipelineState> _copyRGBAToBGRA;
    id<MTLComputePipelineState> _clear;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2;
- (void)copySingleChannel:(id)a0 inTex:(id)a1 outTex:(id)a2;
- (void)sampleFaceRects:(id)a0 maxFaceRects:(int)a1 faceRects:(void *)a2 numberOfFaceRects:(int)a3 inDisparity:(id)a4 outFocusDistanceArray:(id)a5;
- (void)updateFocusObject:(id)a0 faceRectCount:(int)a1 focusDepthOffset:(float)a2 exponentialMovingAverage:(float)a3 isFirstFrame:(BOOL)a4 lastFocus:(id)a5 inFocusDistanceArray:(id)a6 outFocusObject:(id)a7;
- (void)enforceFixedFocusDistance:(id)a0 inDisparity:(id)a1 outDisparity:(id)a2 focusDepthFixed:(float)a3 focusDepthMax:(float)a4 inFocusObject:(id)a5;
- (void)rotateTexture:(id)a0 inTex:(id)a1 outTex:(id)a2 rotationDegrees:(int)a3;
- (void)clear:(id)a0 outTex:(id)a1;
- (void)copyRGBAToBGRA:(id)a0 inTex:(id)a1 outTex:(id)a2;

@end
