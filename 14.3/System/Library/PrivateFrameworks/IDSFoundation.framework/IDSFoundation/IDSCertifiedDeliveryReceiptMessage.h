@class NSString, NSDictionary, NSData, NSNumber;

@interface IDSCertifiedDeliveryReceiptMessage : IDSMessage

@property (retain, nonatomic) NSString *originalGUID;
@property (retain, nonatomic) NSData *senderToken;
@property (retain, nonatomic) NSData *certifiedDeliveryRTS;
@property (nonatomic) long long certifiedDeliveryVersion;
@property (retain, nonatomic) NSNumber *failureReason;
@property (retain, nonatomic) NSString *failureReasonMessage;
@property (nonatomic) BOOL generateDeliveryReceipt;
@property (retain, nonatomic) NSDictionary *generatedDeliveryStatusContext;
@property (retain, nonatomic) NSString *localURI;
@property (retain, nonatomic) NSString *remoteURI;
@property (retain, nonatomic) NSData *queryHash;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)command;
- (id)messageBody;
- (long long)responseCommand;
- (id)requiredKeys;
- (id)initWithCertifiedDeliveryContext:(id)a0;
- (BOOL)wantsResponse;

@end
