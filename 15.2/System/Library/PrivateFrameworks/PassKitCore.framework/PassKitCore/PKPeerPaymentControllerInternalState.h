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

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToPeerPaymentControllerInternalState:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
