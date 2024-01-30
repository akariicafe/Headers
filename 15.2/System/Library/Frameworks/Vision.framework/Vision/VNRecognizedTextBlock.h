@class NSArray, NSAttributedString, CROutputRegion;

@interface VNRecognizedTextBlock : VNRecognizedText {
    CROutputRegion *_crOutputRegion;
    unsigned long long _requestRevision;
}

@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (readonly, copy, nonatomic) NSArray *baselines;

+ (BOOL)supportsSecureCoding;

- (id)string;
- (void)encodeWithCoder:(id)a0;
- (float)confidence;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)requestRevision;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)boundingBoxForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (id)initWithRequestRevision:(unsigned long long)a0 crOutputRegion:(id)a1;
- (id)getCROutputRegion;

@end
