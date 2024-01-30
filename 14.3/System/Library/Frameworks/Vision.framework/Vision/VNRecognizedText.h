@class NSString, CRImageReaderOutput;

@interface VNRecognizedText : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) CRImageReaderOutput *crOutput;
@property (readonly, nonatomic) unsigned long long requestRevision;
@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) float confidence;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)boundingBoxForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 error:(id *)a1;
- (id)initWithRequestRevision:(unsigned long long)a0 CRImageReaderOutput:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;

@end
