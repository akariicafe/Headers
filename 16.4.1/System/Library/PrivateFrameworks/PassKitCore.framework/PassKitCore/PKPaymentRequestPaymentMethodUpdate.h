@class PKPeerPaymentQuote, NSString, NSArray;

@interface PKPaymentRequestPaymentMethodUpdate : PKPaymentRequestUpdate <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPeerPaymentQuote *peerPaymentQuote;
@property (copy, nonatomic) NSString *installmentGroupIdentifier;
@property (copy, nonatomic) NSArray *errors;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithErrors:(id)a0 paymentSummaryItems:(id)a1;
- (id)initWithPaymentSummaryItems:(id)a0;

@end
