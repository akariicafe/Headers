@class PKPeerPaymentQuote;

@interface PKPeerPaymentRequest : PKPaymentRequest

@property (readonly, nonatomic) PKPeerPaymentQuote *peerPaymentQuote;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithPeerPaymentQuote:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
