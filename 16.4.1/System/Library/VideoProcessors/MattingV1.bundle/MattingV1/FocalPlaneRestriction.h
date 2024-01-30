@class MPSImageBox;
@protocol MTLDevice, MTLLibrary, MTLTexture, MTLComputePipelineState;

@interface FocalPlaneRestriction : NSObject {
    id<MTLDevice> _device;
    id<MTLLibrary> _library;
    id<MTLComputePipelineState> _computeFocalPlaneWeightsKernel;
    id<MTLComputePipelineState> _applyFocalPlaneRestrictionKernel;
    id<MTLTexture> _softFocalPlaneTexture;
    id<MTLTexture> _filteredSoftFocalPlaneTexture;
    MPSImageBox *_boxfilter;
}

@property (nonatomic) struct { unsigned int internalWidth; unsigned int internalHeight; float farCutOffBegin; float farCutOffEnd; unsigned int dilationRadius; float dilationPower; BOOL enabled; float zeroShiftPercentile; } config;

- (int)_compileShadersWithLibrary:(id)a0;
- (id)initWithDevice:(id)a0 library:(id)a1;
- (int)allocateResources:(struct { unsigned int x0; unsigned int x1; float x2; float x3; unsigned int x4; float x5; BOOL x6; float x7; })a0;
- (void)releaseResources;
- (int)encodeApplyFocalPlaneRestrictionOn:(id)a0 inputDisparity:(id)a1 segmentation:(id)a2 focalPlane:(id)a3;
- (void).cxx_destruct;

@end
