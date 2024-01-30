@interface CMVO2MaxClassificationData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long biologicalSex;
@property (readonly, nonatomic) long long ageLowerBound;
@property (readonly, nonatomic) long long ageUpperBound;
@property (readonly, nonatomic) long long classificationType;
@property (readonly, nonatomic) double vo2MaxLowerBound;
@property (readonly, nonatomic) double vo2MaxUpperBound;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithBiologicalSex:(long long)a0 ageLowerBound:(long long)a1 ageUpperBound:(long long)a2 classificationType:(long long)a3 vo2MaxLowerBound:(double)a4 vo2MaxUpperBound:(double)a5;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
