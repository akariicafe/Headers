@class PTUtil, NSString, PTGlobalReduction, NSArray, PTOpticalFlow;
@protocol MTLBuffer, MTLSamplerState, MTLComputePipelineState, MTLDeviceSPI;

@interface PTDisparityFilterDEMA_LKT : NSObject <PTAbstractDisparityFilter> {
    id<MTLDeviceSPI> _device;
    id<MTLComputePipelineState> _temporalFilterDEMA_LKT;
    id<MTLComputePipelineState> _temporalFilterDEMA_LKT_VisualizeMotion;
    id<MTLComputePipelineState> _resampleDisparity;
    int _frameCount;
    PTOpticalFlow *_opticalFlow;
    PTGlobalReduction *_globalReduction;
    id<MTLBuffer> _avgDisplacement;
    PTUtil *_util;
    NSString *_dumpInputOutputFolder;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _disparitySize;
    struct { unsigned long long width; unsigned long long height; unsigned long long depth; } _disparityFilteredSize;
    float _direction;
    BOOL _motionVisualization;
    NSArray *_demaStates;
    id<MTLSamplerState> _samplerState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (int)copyDisparity:(id)a0 inDisparity:(id)a1 outDisparity:(id)a2;
- (int)exponentialMovingAverageFilter:(id)a0 inDisplacement:(id)a1 inDemaPrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 outDEMA:(id)a5;
- (id)initFilter:(id)a0;
- (id)initFilter:(id)a0 sensorPort:(id)a1;
- (id)initWithCommandQueue:(id)a0 disparitySize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 disparityFilteredSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 disparityPixelFormat:(unsigned long long)a3 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 colorPixelFormat:(unsigned long long)a5 sensorPort:(id)a6;
- (int)prepareFilter:(id)a0 inRGBA:(id)a1 outDisplacement:(id)a2;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inDisparityPrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 disparityBias:(float)a5;
- (int)temporalDisparityFilter:(id)a0 inDisplacement:(id)a1 inStatePrev:(id)a2 inDisparity:(id)a3 outDisparity:(id)a4 outState:(id)a5;

@end
