@interface CMWalkingSteadinessClassificationData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double lowerBound;
@property (readonly, nonatomic) double upperBound;
@property (readonly, nonatomic) long long classificationType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLowerBound:(double)a0 upperBound:(double)a1 classificationType:(long long)a2;
- (void)dealloc;

@end
