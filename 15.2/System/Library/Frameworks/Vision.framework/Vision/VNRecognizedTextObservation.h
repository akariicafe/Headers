@class NSArray, NSString;

@interface VNRecognizedTextObservation : VNRectangleObservation

@property (copy, nonatomic) NSArray *textObjects;
@property (nonatomic) BOOL isTitle;
@property (readonly, copy, nonatomic) NSString *text;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)topCandidates:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)vn_cloneObject;

@end
