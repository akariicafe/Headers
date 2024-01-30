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
    BOOL _forceSrlOnInLivePhotos;
}

+ (int)prewarmShaders:(id)a0;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (float)curveParameter;
- (BOOL)mitigationNeeded;
- (int)runSRLForLivePhotosWithInputBuffer:(struct __CVBuffer { } *)a0 skinMask:(struct __CVBuffer { } *)a1 personMask:(struct __CVBuffer { } *)a2 instanceMasks:(id)a3 instanceMaskConfidences:(id)a4 skinToneClassification:(id)a5 validROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 expBias:(float)a7 faceExpRatio:(float)a8 exifOrientation:(int)a9 srlV2Plist:(id)a10;
- (unsigned int)getSRLStatus;
- (id)newBufferWithLength:(unsigned long long)a0 options:(unsigned long long)a1 label:(id)a2;
- (int)runSubjectRelightingVersion:(id)a0 toneMap:(id)a1 luma:(id)a2 chroma:(id)a3 ltmChroma:(id)a4 skinMask:(id)a5 personMask:(id)a6 instanceMask0:(id)a7 instanceMask1:(id)a8 instanceMask2:(id)a9 instanceMask3:(id)a10 gammaCurve:(id)a11 instanceMaskConfidences:(id)a12 skinToneClassification:(id)a13 validROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a14 expBias:(float)a15 faceExpRatio:(float)a16 exifOrientation:(int)a17 numFacesISPDetected:(unsigned long long)a18 faceBoundingBoxesFromISP:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; unsigned short x1; unsigned short x2; unsigned short x3; }[10])a19 isChromaGainAdjusted:(BOOL)a20 inputIsLinear:(BOOL)a21 chromaBias:(float)a22 srlV2Plist:(struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; })a23 mstmParams:(id)a24 mstmSRLParams:(id)a25 blackPoint:(id)a26 playBackCurve:(id)a27;

@end
