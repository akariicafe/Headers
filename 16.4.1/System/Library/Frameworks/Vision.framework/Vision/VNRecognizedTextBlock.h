@class NSArray, NSAttributedString, CROutputRegion;

@interface VNRecognizedTextBlock : VNRecognizedText {
    CROutputRegion *_crOutputRegion;
    unsigned long long _requestRevision;
}

@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (readonly, copy, nonatomic) NSArray *baselines;
@property (readonly, nonatomic, getter=getRecognizedLanguages) NSArray *recognizedLanguages;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)requestRevision;
- (id)initWithCoder:(id)a0;
- (float)confidence;
- (id)string;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)boundingBoxForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (id)getCROutputRegion;
- (id)initWithRequestRevision:(unsigned long long)a0 crOutputRegion:(id)a1;

@end
