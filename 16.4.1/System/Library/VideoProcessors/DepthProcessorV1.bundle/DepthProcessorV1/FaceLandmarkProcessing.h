@interface FaceLandmarkProcessing : NSObject {
    unsigned long long _width;
    unsigned long long _height;
    float _confidenceUpdateValue;
    float _minFaceQuality;
    float _confidenceMinValue;
    float _minRatioFaceFill;
    float _maskShrinkRatio;
    struct __CVBuffer { } *_faceMaskBuffer;
    struct __CVBuffer { } *_invalidInvZMaskBuffer;
    float *_validInvZArray;
    float *_validInvZPerRowArray;
    struct CGPoint { double x0; double x1; } *_contourC0;
    unsigned int _contourC0Count;
    unsigned int _minX;
    unsigned int _maxX;
    unsigned int _minY;
    unsigned int _maxY;
    void /* unknown type, blank encoding */ *_pDepthOutputBuffer;
    void /* unknown type, blank encoding */ *_pConfidenceBuffer;
    char *_pFaceMaskBuffer;
    char *_pHoleMaskBuffer;
    unsigned long long _depthOutputBufferBpr;
    unsigned long long _confidenceBpr;
    unsigned long long _faceMaskBufferBpr;
    unsigned long long _invalidInvZMaskBufferBpr;
    BOOL _resourcesAllocated;
}

- (void)releaseResources;
- (void)fillHolesInMask:(void /* unknown type, blank encoding */)a0;
- (int)allocateResources;
- (id)initWithParameters:(struct { unsigned long long x0; unsigned long long x1; float x2; float x3; float x4; float x5; float x6; } *)a0;
- (void)getMedianInvZInFaceMask:(unsigned int)a0 numInvalidFacePixels:(int *)a1 numValidFacePixels:(int *)a2 medianInvZF16:(void /* unknown type, blank encoding */ *)a3;
- (void)dealloc;
- (int)faceLandmarkProcess:(id)a0 exifOrientation:(int)a1 depthInputBuffer:(struct __CVBuffer { } *)a2 confidence:(struct __CVBuffer { } *)a3 depthOutputBuffer:(struct __CVBuffer { } *)a4;

@end
