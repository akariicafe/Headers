@class NSDictionary;

@interface DMFFetchConfigurationOrganizationsResultObject : CATTaskResultObject

@property (retain, nonatomic) NSDictionary *organizationsByIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
