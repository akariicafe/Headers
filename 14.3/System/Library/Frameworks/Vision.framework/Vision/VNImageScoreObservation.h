@class NSNumber;

@interface VNImageScoreObservation : VNObservation

@property (retain, nonatomic) NSNumber *blurScore;
@property (retain, nonatomic) NSNumber *exposureScore;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
