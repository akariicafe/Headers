@class STSMerchantPaymentRequest, STSPeerPaymentTransferRequest;

@interface STSPeerPaymentRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) STSMerchantPaymentRequest *topUpRequest;
@property (retain, nonatomic) STSPeerPaymentTransferRequest *transferRequest;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithTransferRequest:(id)a0 topUpRequest:(id)a1;
- (id)toNFPeerPaymentRequest:(id)a0;

@end
