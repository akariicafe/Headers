@class FigMetalContext;
@protocol MTLComputePipelineState;

@interface CMISoftwareFlashRenderingCoreAnalyticsV1 : NSObject {
    FigMetalContext *_metalContext;
    id<MTLComputePipelineState> _calculateCoreAnalyticHistogramsPipelineState;
    id<MTLComputePipelineState> _calculateCoreAnalyticPercentileSamplePipelineState;
}

- (int)purgeResources;
- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)calculateCastStrengthMetricScale:(id)a0 outputCorrectionStrengthScale:(int *)a1;
- (int)calculateAnalyticSampleHistograms:(id)a0 sourceLuma:(SEL)a1 sourceChroma:(id)a2 destinationLuma:(id)a3 destinationChroma:(id)a4 whitePointMixingMap:(id)a5 sourceYUVOffsets:(id)a6 destinationYUVOffsets:(id)a7 foregroundMixFactorThreshold:(float)a8 numHistogramBins:(unsigned int)a9 maxDeltaEuv:(float)a10 outputForegroundHistogramBuffer:(id)a11 outputBackgroundHistogramBuffer:(id)a12;
- (int)calculateCastCorrectionDirection:(id)a0 oldWhitePoint:(SEL)a1 outputCorrectionDirection:(float *)a2;
- (int)calculateCoreAnalyticPercentileSample:(id)a0 analyticSampleHistogramBuffer:(id)a1 numHistogramBins:(unsigned int)a2 histogramScaleFactor:(float)a3 minSampleRatio:(float)a4 summaryPercentile:(float)a5 maxDeltaEuv:(float)a6 outputPercentileDeltaEuvBuffer:(id)a7;
- (int)calculateDominantCastCorrectionDirections:(id)a0 flashWhitePoint:(SEL)a1 strobeWhitePointTuned:(unsigned int)a2 numCorrectionDirectionWhitePointSamples:(float)a3 foregroundMixFactorThreshold:(float *)a4 outputBackgroundCorrectionDirection:(float *)a5 outputForegroundCorrectionDirection:(void /* unknown type, empty encoding */)a6;
- (int)encodeCoreAnalyticPercentileDeltaEuvBuffersTo:(id)a0 sourceLuma:(SEL)a1 sourceChroma:(id)a2 destinationLuma:(id)a3 destinationChroma:(id)a4 whitePointMixingMap:(id)a5 ambientWhitePointTuned:(id)a6 flashWhitePoint:(id)a7 strobeWhitePointTuned:(unsigned int)a8 sourceYUVOffsets:(float)a9 destinationYUVOffsets:(float)a10 numHistogramBins:(float)a11 maxDeltaEuv:(id)a12 minSampleRatio:(id)a13 summaryPercentile:(id)a14 foregroundAnalyticSampleHistogramBuffer:(id)a15 backgroundAnalyticSampleHistogramBuffer:(void /* unknown type, empty encoding */)a16 outputForegroundPercentileDeltaEuvBuffer:(void /* unknown type, empty encoding */)a17 outputBackgroundPercentileDeltaEuvBuffer:(void /* unknown type, empty encoding */)a18;
- (int)encodeCoreAnalyticTo:(id)a0 backgroundPercentileDeltaEuvBuffer:(SEL)a1 ambientWhitePointTuned:(id)a2 flashWhitePoint:(id)a3 strobeWhitePointTuned:(int *)a4 outputForegroundCorrectionStrengthScale:(int *)a5 outputBackgroundCorrectionStrengthScale:(float *)a6 outputForegroundCorrectionDirection:(float *)a7 outputBackgroundCorrectionDirection:(void /* unknown type, empty encoding */)a8;

@end
