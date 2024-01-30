@class PKApplePayTrustSignatureRequest, NSData;

@interface PKApplePayTrustSignature : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKApplePayTrustSignatureRequest *signatureRequest;
@property (readonly, copy, nonatomic) NSData *signatureData;
@property (readonly, copy, nonatomic) NSData *paymentData;

- (void).cxx_destruct;
- (id)initWithSignatureRequest:(id)a0 signature:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
