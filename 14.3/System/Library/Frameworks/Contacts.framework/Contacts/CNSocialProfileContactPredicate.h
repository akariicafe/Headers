@class CNSocialProfile;

@interface CNSocialProfileContactPredicate : CNPredicate

@property (readonly, copy, nonatomic) CNSocialProfile *socialProfile;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithSocialProfile:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
