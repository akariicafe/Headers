@class NSString;

@interface DMFFetchConfigurationSourceSyncTokenResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *syncToken;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
