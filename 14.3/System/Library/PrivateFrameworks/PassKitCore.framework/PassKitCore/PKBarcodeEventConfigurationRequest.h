@class NSString, NSData;

@interface PKBarcodeEventConfigurationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *deviceAccountIdentifier;
@property (copy, nonatomic) NSData *configurationData;
@property (nonatomic) long long configurationDataType;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
