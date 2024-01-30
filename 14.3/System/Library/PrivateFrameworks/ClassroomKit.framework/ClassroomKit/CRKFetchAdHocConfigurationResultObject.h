@class NSDictionary;

@interface CRKFetchAdHocConfigurationResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *configuration;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
