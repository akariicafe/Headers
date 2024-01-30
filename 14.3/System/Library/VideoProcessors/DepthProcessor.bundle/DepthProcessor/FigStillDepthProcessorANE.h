@class NSArray, NSDictionary, NSString, FigMetalContext, ANEDepthScalingProcessor;

@interface FigStillDepthProcessorANE : NSObject <DepthProcessor> {
    FigMetalContext *_metalContext;
    ANEDepthScalingProcessor *_depthScaling;
}

@property (retain, nonatomic) NSArray *faceLandmarksArray;
@property (readonly, nonatomic) float disparityQualityScore;
@property (readonly, nonatomic) BOOL disparityQualityIsHigh;
@property (readonly, nonatomic) int figDepthQuality;
@property (nonatomic) float minSceneMonitorGatingDistance;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } infraredCameraIntrinsicMatrix;
@property (nonatomic) struct { int x0; int x1; } infraredCameraIntrinsicMatrixReferenceDimensions;
@property (nonatomic) float infraredCameraPixelSizeInMicrons;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[3]; } rgbCameraIntrinsicMatrix;
@property (nonatomic) struct { int x0; int x1; } rgbCameraIntrinsicMatrixReferenceDimensions;
@property (nonatomic) float rgbCameraPixelSizeInMicrons;
@property (nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } extrinsicMatrixFromInfraredToRGBCamera;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)allocateResources;
- (void).cxx_destruct;
- (void)releaseResources;
- (void)dealloc;
- (int)setTuningParameters:(id)a0;
- (int)prewarmWithTuningParameters:(id)a0;
- (int)processDepthBuffer:(struct __CVBuffer { } *)a0 yuvBuffer:(struct __CVBuffer { } *)a1 parametersDictionary:(id)a2 outputDisparityBuffer:(struct __CVBuffer { } *)a3;
- (int)processDepthBuffer:(struct __CVBuffer { } *)a0 yuvBuffer:(struct __CVBuffer { } *)a1 rgbSegmentationMaskBuffer:(struct __CVBuffer { } *)a2 parametersDictionary:(id)a3 outputDisparityBuffer:(struct __CVBuffer { } *)a4;
- (id)initWithParameters:(struct depthProcessorParameters { unsigned long long x0; unsigned long long x1; } *)a0 commandQueue:(id)a1;
- (int)convertDepth:(struct __CVBuffer { } *)a0 toDisparity:(struct __CVBuffer { } *)a1;
- (int)scaleInputDepth:(struct __CVBuffer { } *)a0 toDisparity:(struct __CVBuffer { } *)a1;

@end
