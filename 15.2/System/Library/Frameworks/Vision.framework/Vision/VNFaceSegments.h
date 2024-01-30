@class NSDictionary, NSData;

@interface VNFaceSegments : NSObject <NSSecureCoding, NSCopying, VNRequestRevisionProviding> {
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _probabilityNormSums;
}

@property (class, readonly) unsigned long long faceSegmentsPixelSizeInBytes;
@property (class, readonly) NSDictionary *faceSegmentIndexToFlagMap;
@property (class, readonly) NSDictionary *faceSegmentToSegmentMaskGrayLevelDictionary;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long outputBufferWidth;
@property (readonly, nonatomic) unsigned long long outputBufferHeight;
@property (readonly, nonatomic) NSData *outputBufferData;
@property (readonly, nonatomic) unsigned long long numberOfFaceSegments;
@property (readonly, nonatomic) NSDictionary *faceSegmentLabelToProbabilityMap;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBox;
@property (readonly, nonatomic) unsigned long long requestRevision;

- (void)encodeWithCoder:(id)a0;
- (struct __CVBuffer { } *)createMaskImageOfFaceSegments:(unsigned long long)a0 error:(id *)a1;
- (struct __CVBuffer { } *)createProbabilityImageOfFaceSegment:(unsigned long long)a0 region:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 normalize:(BOOL)a2 error:(id *)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id).cxx_construct;
- (id)initWithRequestRevision:(unsigned long long)a0 outputBufferWidth:(unsigned long long)a1 outputBufferHeight:(unsigned long long)a2 outputBufferData:(id)a3 numberOfFaceSegments:(unsigned long long)a4 faceSegmentBBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 faceSegmentLabelToProbabilityMap:(id)a6;
- (struct __CVBuffer { } *)createProbabilityImageOfFaceSegment:(unsigned long long)a0 error:(id *)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_normalizeRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })_makeFaceSegmentProbabilityDataImageBuffer:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct __CVBuffer { } *)_createFaceSegmentProabilityDataPixelBufferWithSize:(struct CGSize { double x0; double x1; })a0 error:(id *)a1;
- (void)_calculateProbabilityNormalSumsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
