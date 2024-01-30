@class NSDictionary;

@interface DMFFetchRestrictionsResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSDictionary *restrictions;
@property (readonly, copy, nonatomic) NSDictionary *globalRestrictions;
@property (readonly, copy, nonatomic) NSDictionary *profileRestrictions;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithRestrictions:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
