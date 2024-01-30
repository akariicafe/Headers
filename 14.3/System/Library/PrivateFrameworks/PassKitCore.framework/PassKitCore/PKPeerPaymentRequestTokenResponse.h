@class PKPeerPaymentRequestToken;

@interface PKPeerPaymentRequestTokenResponse : PKPeerPaymentWebServiceResponse

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) PKPeerPaymentRequestToken *requestToken;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0 deviceScoreIdentifier:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
