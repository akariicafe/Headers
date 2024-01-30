@class MLFeatureDescription;

@interface MLSequenceConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MLFeatureDescription *valueDescription;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } countRange;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValueDescription:(id)a0 countRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)isAllowedValue:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;

@end
