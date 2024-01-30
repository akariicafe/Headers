@class NSDictionary;

@interface CRKFetchIdentitiesTaskResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *courseIdentityInfosByGroupIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
