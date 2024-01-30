@class NSString;

@interface PKAddSecureElementPassConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long configurationType;
@property (copy, nonatomic) NSString *issuerIdentifier;
@property (copy, nonatomic) NSString *localizedDescription;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0;
- (BOOL)hasRequiredDataForProvisioning;

@end
