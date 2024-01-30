@class NSString;

@interface PKAddCarKeyPassConfiguration : PKAddSecureElementPassConfiguration

@property (copy, nonatomic) NSString *appIdentifier;
@property (copy, nonatomic) NSString *password;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
