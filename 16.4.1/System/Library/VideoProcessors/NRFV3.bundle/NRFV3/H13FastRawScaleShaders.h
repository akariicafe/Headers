@class SoftISPKernelWithFunctionConstants;
@protocol MTLComputePipelineState;

@interface H13FastRawScaleShaders : NSObject

@property (readonly, nonatomic) SoftISPKernelWithFunctionConstants *processFocusPixelBlock;
@property (readonly, nonatomic) SoftISPKernelWithFunctionConstants *processFocusPixelBlockPairs;
@property (readonly, nonatomic) SoftISPKernelWithFunctionConstants *processFocusPixelBlockPairsFixedCenterIndex;
@property (readonly, nonatomic) SoftISPKernelWithFunctionConstants *pdcDetectionCorrectionScan;
@property (readonly, nonatomic) SoftISPKernelWithFunctionConstants *qpdcDynamicDetectKernel;
@property (readonly, nonatomic) id<MTLComputePipelineState> sensorRawDecode;
@property (readonly, nonatomic) id<MTLComputePipelineState> pdcMarkStaticDefects;
@property (readonly, nonatomic) id<MTLComputePipelineState> pdcStaticDefectReplace;
@property (readonly, nonatomic) id<MTLComputePipelineState> pdcWriteStaticDefectReplace;
@property (readonly, nonatomic) id<MTLComputePipelineState> pdcWriteStaticDefectLookup;
@property (readonly, nonatomic) id<MTLComputePipelineState> extractRedsAndBlues;
@property (readonly, nonatomic) id<MTLComputePipelineState> computeLCAShiftsAndWarpRedBlue;
@property (readonly, nonatomic) id<MTLComputePipelineState> qpdcReplaceStaticDefectsKernel;
@property (readonly, nonatomic) id<MTLComputePipelineState> qpdcCorrectStaticDefectsKernel;
@property (readonly, nonatomic) id<MTLComputePipelineState> qpdcWriteCorrectedStaticDefectsKernel;
@property (readonly, nonatomic) id<MTLComputePipelineState> qpdcFocusPixelCorrectionKernel;
@property (readonly, nonatomic) id<MTLComputePipelineState> qpdcDynamicCorrectKernel;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;

@end
