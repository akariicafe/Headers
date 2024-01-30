@class NSString;

@interface PKBarcodeEventMetadataRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *deviceAccountIdentifier;
@property (copy, nonatomic) NSString *lastUsedBarcodeIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBarcodeIdentifier:(id)a0 deviceAccountIdentifier:(id)a1;

@end
