@class NSArray, NSDictionary, NSString, FigMetalContext, NSObject, ANEDepthScalingProcessor;
@protocol OS_dispatch_queue;

@interface FigStillDepthProcessorANE : NSObject <DepthProcessor> {
    FigMetalContext *_metalContext;
    ANEDepthScalingProcessor *_depthScaling;
}

@property (retain, nonatomic) NSArray *faceLandmarksArray;
@property (readonly, nonatomic) float disparityQualityScore;
@property (readonly, nonatomic) BOOL disparityQualityIsHigh;
@property (readonly, nonatomic) int figDepthQuality;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;
@property (nonatomic) BOOL streamingGDRFilterEnabled;
@property (nonatomic) BOOL streamingSMPFilterEnabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)releaseResources;
- (int)prewarmWithTuningParameters:(id)a0;
- (int)setTuningParameters:(id)a0;
- (id)initWithParameters:(struct depthProcessorParameters { unsigned long long x0; unsigned long long x1; unsigned long long x2; } *)a0 commandQueue:(id)a1;
- (BOOL)allocateResources;
- (int)processDepthBuffer:(struct __CVBuffer { } *)a0 yuvBuffer:(struct __CVBuffer { } *)a1 rgbSegmentationMaskBuffer:(struct __CVBuffer { } *)a2 parametersDictionary:(id)a3 outputDisparityBuffer:(struct __CVBuffer { } *)a4;
- (void)dealloc;
- (id)init;
- (int)processDepthBuffer:(struct __CVBuffer { } *)a0 yuvBuffer:(struct __CVBuffer { } *)a1 personSegmentationMaskBuffer:(struct __CVBuffer { } *)a2 instanceSegmentationMaskBufferArray:(id)a3 instanceSegmentationConfidences:(id)a4 parametersDictionary:(id)a5 outputDisparityBuffer:(struct __CVBuffer { } *)a6;
- (int)processDepthBuffer:(struct __CVBuffer { } *)a0 yuvBuffer:(struct __CVBuffer { } *)a1 parametersDictionary:(id)a2 outputDisparityBuffer:(struct __CVBuffer { } *)a3;
- (void).cxx_destruct;
- (int)convertDepth:(struct __CVBuffer { } *)a0 toDisparity:(struct __CVBuffer { } *)a1;
- (int)scaleInputDepth:(struct __CVBuffer { } *)a0 toDisparity:(struct __CVBuffer { } *)a1;

@end
