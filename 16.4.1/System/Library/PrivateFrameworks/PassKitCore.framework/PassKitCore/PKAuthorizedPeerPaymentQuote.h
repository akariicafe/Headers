@class PKContact, NSData, NSDictionary, PKPeerPaymentQuote;

@interface PKAuthorizedPeerPaymentQuote : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKPeerPaymentQuote *peerPaymentQuote;
@property (retain, nonatomic) PKContact *contact;
@property (readonly, nonatomic) NSData *transactionData;
@property (readonly, nonatomic) NSDictionary *certificates;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithQuote:(id)a0 transactionData:(id)a1 certificates:(id)a2;

@end
