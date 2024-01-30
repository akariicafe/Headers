@class PKNameComponentFormatConfiguration, PKAddressFormatConfiguration;

@interface PKRegionalContactFormatConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKNameComponentFormatConfiguration *nameComponentFormatConfiguration;
@property (readonly, nonatomic) PKAddressFormatConfiguration *addressFormatConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
