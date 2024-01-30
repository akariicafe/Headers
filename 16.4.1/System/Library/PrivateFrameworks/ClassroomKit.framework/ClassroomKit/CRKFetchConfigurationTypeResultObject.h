@interface CRKFetchConfigurationTypeResultObject : CATTaskResultObject

@property (nonatomic) unsigned long long configurationType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
