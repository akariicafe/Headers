@class NSDecimalNumber, NSUUID, NSString, MSMessage, PKCurrencyAmount, PKProtobufPeerPaymentMessage, PKPeerPaymentRequestToken;

@interface PKPeerPaymentMessage : NSObject {
    PKProtobufPeerPaymentMessage *_protoMessage;
}

@property (readonly, nonatomic) MSMessage *underlyingMessage;
@property (readonly, nonatomic) BOOL hasBeenSent;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *currency;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) PKCurrencyAmount *currencyAmount;
@property (copy, nonatomic) NSString *senderAddress;
@property (copy, nonatomic) NSString *recipientAddress;
@property (copy, nonatomic) PKPeerPaymentRequestToken *requestToken;
@property (copy, nonatomic) NSString *paymentIdentifier;
@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSString *memo;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(unsigned long long)a0;
- (void)_updateSummaryText;
- (id)_requestDeviceScoreIdentifier;
- (id)initWithType:(unsigned long long)a0 session:(id)a1;
- (id)initWithUnderlyingMessage:(id)a0;
- (void)_updateDataURL;
- (void)_updateLayoutContents;
- (void)updateWithPeerPaymentPerformResponse:(id)a0;

@end
