@class PKPeerPaymentQuote, NSString, PKPeerPaymentPerformResponse, PKPeerPaymentQuoteCertificatesResponse, PKPeerPaymentQuoteRequest, PKPeerPaymentRecipient, PKPeerPaymentRequestToken;

@interface PKPeerPaymentControllerInternalState : NSObject <NSSecureCoding> {
    unsigned long long state;
    unsigned long long mode;
    NSString *senderPhoneOrEmail;
    NSString *recipientPhoneOrEmail;
    PKPeerPaymentRecipient *recipient;
    NSString *recipientDisplayName;
    PKPeerPaymentRequestToken *requestToken;
    PKPeerPaymentQuote *quote;
    PKPeerPaymentPerformResponse *performQuoteResponse;
    BOOL supportsPreserveCurrentBalance;
    PKPeerPaymentQuoteCertificatesResponse *quoteCertificatesResponse;
    NSString *accountName;
    NSString *accountNumber;
    NSString *routingNumber;
    PKPeerPaymentQuoteRequest *quoteRequest;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToPeerPaymentControllerInternalState:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
