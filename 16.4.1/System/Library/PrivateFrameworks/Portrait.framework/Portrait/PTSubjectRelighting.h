@class NSDictionary, SRLv2Plist;
@protocol MTLComputePipelineState, MTLBuffer, MTLTexture;

@interface PTSubjectRelighting : NSObject {
    id<MTLComputePipelineState> _srlV2GlobalHistogramLivePhotos;
    id<MTLComputePipelineState> _srlV2FaceHistogramLivePhotos;
    id<MTLComputePipelineState> _srlV2CalcCoefficientsLivePhotos;
    id<MTLBuffer> _srlV2GlobalStatsBuffer;
    id<MTLBuffer> _srlV2FaceStatsBuffer;
    id<MTLBuffer> _srlV2CoeffsBuffer;
    SRLv2Plist *_srlV2Plist;
    NSDictionary *_plistSRL;
    id<MTLTexture> _black;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 commandQueue:(id)a3 effectUtil:(id)a4 util:(id)a5 prewarmOnly:(BOOL)a6;
- (int)runSRLForLivePhotosWithInputBuffer:(id)a0 lumaTexture:(id)a1 chromaTexture:(id)a2 skinMaskTexture:(id)a3 personMaskTexture:(id)a4 instanceMaskConfidences:(id)a5 skinToneClassification:(id)a6 validROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a7 expBias:(float)a8 faceExpRatio:(float)a9 exifOrientation:(int)a10;
- (id)srlV2CoeffsBuffer;

@end
