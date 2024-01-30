@class NSData;

@interface PKBarcodeEventMetadataResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *paymentInformation;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithPaymentInformation:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
