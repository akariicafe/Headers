@class PTUtil, NSString, PTGlobalReduction, NSArray, PTOpticalFlow;
@protocol MTLComputePipelineState, MTLDeviceSPI, MTLBuffer;

@interface PTDisparityFilterDEMA_LKT : NSObject <PTAbstractDisparityFilter> {
    id<MTLDeviceSPI> _device;
    id<MTLComputePipelineState> _temporalFilterDEMA_LKT;
    id<MTLComputePipelineState> _temporalFilterDEMA_LKT_VisualizeMotion;
    id<MTLComputePipelineState> _copyDisparityWithBias;
    int _frameCount;
    void /* unknown type, empty encoding */ _iirUpdateCoefficients;
    void /* unknown type, empty encoding */ _motionMinMaxThreshold;
    PTOpticalFlow *_opticalFlow;
    PTGlobalReduction *_globalReduction;
    id<MTLBuffer> _globalAverageResult;
    PTUtil *_util;
    NSString *_dumpInputOutputFolder;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _disparitySize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _disparityFilteredSize;
    float _direction;
    NSArray *demaStates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (id)initFilter:(id)a0;
- (id)initFilter:(id)a0 sensorPort:(id)a1;
- (int)copyDisparityWithBias:(id)a0 inDisparity:(id)a1 outDisparity:(id)a2 disparityBias:(float)a3;
- (int)exponentialMovingAverageFilter:(SEL)a0 inDisplacement:(id)a1 inDemaPrev:(id)a2 inDisparity:(id)a3 outDisparityFiltered:(id)a4 outDEMA:(id)a5 updateCoefficients:(id)a6 disparityBias:(float)a7;
- (int)computeOpticalFlow:(id)a0 inRGBA:(id)a1 outDisplacement:(id)a2;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inDisparityFilteredPrev:(id)a2 inDisparity:(id)a3 outDisparityFiltered:(id)a4 disparityBias:(float)a5;
- (id)initWithCommandQueue:(id)a0 disparitySize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 disparityFilteredSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 disparityPixelFormat:(unsigned long long)a3 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 colorPixelFormat:(unsigned long long)a5 sensorPort:(id)a6;

@end
