@protocol MTLComputePipelineState;

@interface PTEffectUtil : NSObject {
    id<MTLComputePipelineState> _updateFocusObject;
    id<MTLComputePipelineState> _effectSampleFaceRects;
    id<MTLComputePipelineState> _convertToDisparity;
    id<MTLComputePipelineState> _fixedFocusDistanceAndCenterDisparity;
    id<MTLComputePipelineState> _copySingleChannel;
    id<MTLComputePipelineState> _copyRGBAToBGRA;
    id<MTLComputePipelineState> _clear;
}

+ (id)faceRectsForVision:(void *)a0 numberOfFaceRects:(int)a1 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
+ (unsigned int)orientationFromTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getBoundingBox:(id)a0;
- (void)copySingleChannel:(id)a0 inTex:(id)a1 outTex:(id)a2;
- (void)clear:(id)a0 outTex:(id)a1;
- (void)copyRGBAToBGRA:(id)a0 inTex:(id)a1 outTex:(id)a2;
- (void)fixedFocusDistanceAndCenterDisparity:(id)a0 inDisparity:(id)a1 outDisparity:(id)a2 focusDepthFixed:(float)a3 focusDepthMax:(float)a4 inFocusObject:(id)a5;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2;
- (int)orientationForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 size:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)rotateTexture:(id)a0 inTex:(id)a1 outTex:(id)a2 rotationDegrees:(int)a3;
- (void)sampleFaceRects:(id)a0 maxFaceRects:(int)a1 faceRects:(void *)a2 numberOfFaceRects:(int)a3 inDisparity:(id)a4 outFocusDistanceArray:(id)a5;
- (void)updateFocusObject:(id)a0 faceRectCount:(int)a1 focusDepthOffset:(float)a2 exponentialMovingAverage:(float)a3 isFirstFrame:(BOOL)a4 lastFocus:(id)a5 inFocusDistanceArray:(id)a6 outFocusObject:(id)a7 outFocusFaceIndex:(id)a8;

@end
