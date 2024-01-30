@class PKPeerPaymentQuote;

@interface PKPeerPaymentRequest : PKPaymentRequest

@property (readonly, nonatomic) PKPeerPaymentQuote *peerPaymentQuote;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithPeerPaymentQuote:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
