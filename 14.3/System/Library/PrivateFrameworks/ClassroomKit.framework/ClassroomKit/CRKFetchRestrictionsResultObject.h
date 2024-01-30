@class NSDictionary;

@interface CRKFetchRestrictionsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *valuesByRestriction;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
