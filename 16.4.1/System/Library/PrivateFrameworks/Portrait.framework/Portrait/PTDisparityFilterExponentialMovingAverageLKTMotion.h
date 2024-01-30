@class NSString, PTOpticalFlow, PTUtil;
@protocol MTLComputePipelineState, MTLDeviceSPI;

@interface PTDisparityFilterExponentialMovingAverageLKTMotion : NSObject <PTAbstractDisparityFilter> {
    id<MTLDeviceSPI> _device;
    id<MTLComputePipelineState> _temporalFilterExponentialMovingAverageLKTMotion;
    id<MTLComputePipelineState> _temporalFilterExponentialMovingAverageLKTMotionNormal;
    id<MTLComputePipelineState> _copyDisparityWithBias;
    int _frameCount;
    void /* unknown type, blank encoding */ _iirUpdateCoefficient;
    PTOpticalFlow *_opticalFlow;
    PTUtil *_util;
    NSString *_dumpInputOutputFolder;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _disparitySize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _disparityFilteredSize;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (int)copyDisparityWithBias:(id)a0 inDisparity:(id)a1 outDisparity:(id)a2 disparityBias:(float)a3;
- (int)exponentialMovingAverageFilter:(id)a0 inDisplacement:(id)a1 inDisparityPrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 updateCoefficient:(void /* unknown type, blank encoding */)a5 disparityBias:(float)a6;
- (int)exponentialMovingAverageFilterNormal:(id)a0 inDisplacement:(id)a1 inNormalPrev:(id)a2 inNormal:(id)a3 outNormal:(id)a4 updateCoefficient:(void /* unknown type, blank encoding */)a5;
- (id)initFilter:(id)a0;
- (id)initWithCommandQueue:(id)a0 disparitySize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 disparityFilteredSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 disparityPixelFormat:(unsigned long long)a3 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 colorPixelFormat:(unsigned long long)a5 sensorPort:(id)a6;
- (int)prepareFilter:(id)a0 inRGBA:(id)a1 outDisplacement:(id)a2;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inDisparityPrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 disparityBias:(float)a5;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inStatePrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 outState:(id)a5;

@end
