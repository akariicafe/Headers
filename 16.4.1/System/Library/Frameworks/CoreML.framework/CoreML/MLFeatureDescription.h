@class NSString, NSDictionary, MLDictionaryConstraint, MLImageConstraint, MLMultiArrayConstraint, MLSequenceConstraint;

@interface MLFeatureDescription : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *valueConstraints;
@property (readonly, nonatomic) MLMultiArrayConstraint *multiArrayConstraintCached;
@property (readonly, nonatomic) MLImageConstraint *imageConstraintCached;
@property (readonly, nonatomic) MLDictionaryConstraint *dictionaryConstraintCached;
@property (readonly, nonatomic) MLSequenceConstraint *sequenceConstraintCached;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic, getter=isOptional) BOOL optional;

+ (id)featureDescriptionWithName:(id)a0 type:(long long)a1 optional:(BOOL)a2 constraints:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isAllowedValue:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)sequenceConstraint;
- (id)initWithName:(id)a0 type:(long long)a1 optional:(BOOL)a2 contraints:(id)a3;
- (BOOL)isAllowedValue:(id)a0;
- (id)debugQuickLookObject;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)imageConstraint;
- (BOOL)allowsValuesWithDescription:(id)a0;
- (id)dictionaryConstraint;
- (id)description;
- (void).cxx_destruct;
- (id)multiArrayConstraint;

@end
