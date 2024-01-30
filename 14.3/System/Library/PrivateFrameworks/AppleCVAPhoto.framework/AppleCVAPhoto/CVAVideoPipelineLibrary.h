@interface CVAVideoPipelineLibrary : NSObject

+ (id)videoPipelinePropertiesForDevice:(unsigned long long)a0;
+ (id)portraitVideoPipelineWithProperties:(id)a0 error:(id *)a1;
+ (id)colorCubePortraitGenericRequestForPortraitVideoPipeline:(id)a0 sourceColorPixelBuffer:(struct __CVBuffer { } *)a1 cubeData:(id)a2 error:(id *)a3;
+ (id)opaqueBackgroundRequestWithMattingRequest:(id)a0 error:(id *)a1;
+ (id)contourLightRequestWithFace:(id)a0 error:(id *)a1;
+ (id)studioLightRequestWithFace:(id)a0 error:(id *)a1;
+ (id)syntheticDepthOfFieldBackgroundRequestWithMattingRequest:(id)a0 simulatedFocalRatio:(float)a1 sourceColorGain:(float)a2 sourceColorLux:(float)a3 error:(id *)a4;
+ (id)studioLightRequestWithFace:(id)a0 relightStyleStrength:(float)a1 error:(id *)a2;
+ (id)contourLightRequestWithFace:(id)a0 relightStyleStrength:(float)a1 error:(id *)a2;
+ (id)colorCubeRequestWithBackgroundCube:(id)a0 foregroundCube:(id)a1 error:(id *)a2;
+ (id)portraitRequestWithBackground:(id)a0 light:(id)a1 post:(id)a2 error:(id *)a3;
+ (int)prewarm;
+ (id)mattingVideoPipelineWithProperties:(id)a0 error:(id *)a1;
+ (id)disparityPostprocessingVideoPipelineWithProperties:(id)a0 error:(id *)a1;
+ (id)colorCubePortraitRequestForPortraitVideoPipeline:(id)a0 withWithSourceColorPixelBuffer:(struct __CVBuffer { } *)a1 destinationColorPixelBuffer:(struct __CVBuffer { } *)a2 cubeData:(id)a3;
+ (id)stageLightPortraitRequestWithMattingRequest:(id)a0 destinationColorPixelBuffer:(struct __CVBuffer { } *)a1 proxyCubeData:(id)a2 cubeData:(id)a3;
+ (id)stageLightPortraitRequestWithMattingRequest:(id)a0 destinationColorPixelBuffer:(struct __CVBuffer { } *)a1 proxyCubeData:(id)a2 cubeData:(id)a3 vignetteIntensity:(float)a4 stageLightIntensity:(float)a5;
+ (id)syntheticDepthOfFieldPortraitRequestWithMattingRequest:(id)a0 destinationColorPixelBuffer:(struct __CVBuffer { } *)a1 backgroundColorCube:(id)a2 foregroundColorCube:(id)a3 colorCubeIntensity:(float)a4 simulatedFocalRatio:(float)a5 sourceColorGain:(float)a6 sourceColorLux:(float)a7;
+ (id)sourceImageRequest:(struct __CVBuffer { } *)a0 error:(id *)a1;
+ (id)colorCubeRequest:(id)a0 isMono:(BOOL)a1 error:(id *)a2;
+ (id)portraitVideoPipelineWithProperties:(id)a0;
+ (id)mattingVideoPipelineWithProperties:(id)a0;
+ (id)disparityPostprocessingVideoPipelineWithProperties:(id)a0;

@end
