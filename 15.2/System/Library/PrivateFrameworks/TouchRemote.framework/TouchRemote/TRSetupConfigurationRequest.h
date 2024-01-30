@class NSString;

@interface TRSetupConfigurationRequest : TRRequestMessage

@property (copy, nonatomic) NSString *deviceName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
