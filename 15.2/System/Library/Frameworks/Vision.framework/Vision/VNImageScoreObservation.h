@class NSNumber;

@interface VNImageScoreObservation : VNObservation

@property (retain, nonatomic) NSNumber *blurScore;
@property (retain, nonatomic) NSNumber *exposureScore;

+ (BOOL)supportsSecureCoding;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)vn_cloneObject;

@end
