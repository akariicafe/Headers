@class NSArray, MLMultiArrayShapeConstraint;

@interface MLMultiArrayConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *shape;
@property (readonly, nonatomic) long long dataType;
@property (readonly, nonatomic) MLMultiArrayShapeConstraint *shapeConstraint;

+ (id)constraintWithShape:(id)a0 dataType:(long long)a1;
+ (id)constraintWithShape:(id)a0 dataType:(long long)a1 shapeConstraint:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isAllowedShape:(id)a0 error:(id *)a1;
- (BOOL)isAllowedValue:(id)a0 isNeuralNetworkInputOrOutput:(BOOL)a1 usingRank5Mapping:(BOOL)a2 featureName:(id)a3 error:(id *)a4;
- (BOOL)isAllowedDataType:(long long)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithShape:(id)a0 dataType:(long long)a1 shapeConstraint:(id)a2;
- (BOOL)isAllowedValue:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;

@end
