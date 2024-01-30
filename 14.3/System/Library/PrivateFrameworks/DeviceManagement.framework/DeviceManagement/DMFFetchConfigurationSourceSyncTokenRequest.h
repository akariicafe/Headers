@class NSString;

@interface DMFFetchConfigurationSourceSyncTokenRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *configurationSource;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
