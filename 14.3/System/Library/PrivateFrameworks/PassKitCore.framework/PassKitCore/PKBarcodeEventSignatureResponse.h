@class NSData;

@interface PKBarcodeEventSignatureResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *signedData;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithSignedData:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
