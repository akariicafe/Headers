@class NSDictionary;

@interface CRKFetchAdHocConfigurationResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *configuration;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
