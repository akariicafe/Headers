@class SRLv2Plist, SubjectRelightingShaders, FigMetalContext;
@protocol MTLBuffer, MTLCommandBuffer;

@interface SubjectRelightingStage : NSObject {
    FigMetalContext *_metalContext;
    SubjectRelightingShaders *_shaders;
    SRLv2Plist *_srlV2Plist;
    BOOL _allocateBuffersWithAllocator;
    id<MTLBuffer> _srlV2GlobalStatsBuffer;
    id<MTLBuffer> _srlV2FaceStatsBuffer;
    id<MTLBuffer> _srlV2CoeffsBuffer;
    id<MTLCommandBuffer> _lastSRLCommandBuffer;
    BOOL _mitigationNeeded;
    float _curveParameter;
    BOOL _srlInLivePhotos;
}

+ (int)prewarmShaders:(id)a0;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (float)curveParameter;
- (int)runSRLForLivePhotosWithInputBuffer:(struct __CVBuffer { } *)a0 skinMask:(struct __CVBuffer { } *)a1 personMask:(struct __CVBuffer { } *)a2 instanceMasks:(id)a3 instanceMaskConfidences:(id)a4 skinToneClassification:(id)a5 validROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 expBias:(float)a7 faceExpRatio:(float)a8 exifOrientation:(int)a9 srlV2Plist:(id)a10;
- (BOOL)mitigationNeeded;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 label:(id)a2;
- (unsigned int)getSRLStatus;
- (int)runSubjectRelighting:(id)a0 luma:(id)a1 chroma:(id)a2 ltmChroma:(id)a3 skinMask:(id)a4 personMask:(id)a5 instanceMask0:(id)a6 instanceMask1:(id)a7 instanceMask2:(id)a8 instanceMask3:(id)a9 instanceMaskConfidences:(id)a10 skinToneClassification:(id)a11 validROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a12 expBias:(float)a13 faceExpRatio:(float)a14 exifOrientation:(int)a15 numFacesISPDetected:(unsigned long long)a16 faceBoundingBoxesFromISP:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; unsigned short x1; unsigned short x2; unsigned short x3; }[10])a17 isChromaGainAdjusted:(BOOL)a18 inputIsLinear:(BOOL)a19 chromaBias:(float)a20 srlV2Plist:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; })a21 mstmParams:(id)a22 mstmSRLParams:(id)a23;

@end
