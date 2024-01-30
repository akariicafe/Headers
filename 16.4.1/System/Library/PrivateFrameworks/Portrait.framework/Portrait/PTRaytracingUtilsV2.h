@protocol MTLComputePipelineState, MTLDevice;

@interface PTRaytracingUtilsV2 : NSObject {
    id<MTLComputePipelineState> _focusEdgeMask;
    id<MTLComputePipelineState> _centerDisparityOnFocus;
    id<MTLComputePipelineState> _sobelEdgeDetector;
    id<MTLComputePipelineState> _edgeDilation;
    id<MTLDevice> _device;
}

+ (float)focalLength;
+ (void)initEquidistPoints:(struct PTRandomDisk { struct Half2 { void /* unknown type, blank encoding */ x0; void /* unknown type, blank encoding */ x1; } x0[94]; int x1; void /* unknown type, blank encoding */ x2; } *)a0 samplePatternCircles:(int)a1;
+ (struct PTFocusEdge { float x0; float x1; float x2; float x3; })createFocusEdge;
+ (id)createRandomUChars:(id)a0 rayCount:(int)a1;
+ (float)frameWidth;
+ (struct PTFocus { float x0; float x1; float x2; float x3; float x4; float x5; })createFocusObject:(SEL)a0 coverageOverscan:(id)a1 anamorphicFactor:(float)a2 rayCount:(float)a3 colorSize:(int)a4 doMacroApertureLimit:(BOOL)a5;

- (void).cxx_destruct;
- (void)centerDisparityOnFocus:(id)a0 inDisparity:(id)a1 outDisparity:(id)a2 focusObject:(struct PTFocus { float x0; float x1; float x2; float x3; float x4; float x5; })a3 foregroundBlurLimitingFactor:(float)a4;
- (int)detectDilatedEdges:(id)a0 inDisparity:(id)a1 tempEdges:(id)a2 outEdges:(id)a3 focusObject:(struct PTFocus { float x0; float x1; float x2; float x3; float x4; float x5; })a4 disparityDiffMinMax:(id)a5 edgeTolerance:(float)a6;
- (void)focusEdgeMask:(id)a0 inDisparityDiff:(id)a1 focusObject:(struct PTFocus { float x0; float x1; float x2; float x3; float x4; float x5; })a2 focusEdge:(struct PTFocusEdge { float x0; float x1; float x2; float x3; })a3 outFocusEdgeMask:(id)a4;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2;
- (int)sobelEdgeDetection:(id)a0 inImage:(id)a1 outEdges:(id)a2 edgeTolerance:(float)a3;

@end
