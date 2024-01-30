@class NSDictionary;

@interface CRKFetchApplicationsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *applicationsByIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
