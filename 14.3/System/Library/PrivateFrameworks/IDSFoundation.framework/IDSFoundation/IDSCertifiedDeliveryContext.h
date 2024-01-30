@class NSString, NSDictionary, NSData, NSNumber, IDSCertifiedDeliveryReplayKey;

@interface IDSCertifiedDeliveryContext : NSObject

@property (readonly, nonatomic) NSString *originalGUID;
@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) long long certifiedDeliveryVersion;
@property (readonly, nonatomic) NSData *certifiedDeliveryRTS;
@property (readonly, nonatomic) NSData *senderToken;
@property (retain, nonatomic) NSNumber *failureReason;
@property (retain, nonatomic) NSString *failureReasonMessage;
@property (readonly, nonatomic) IDSCertifiedDeliveryReplayKey *replayKey;
@property (nonatomic) BOOL generateDeliveryReceipt;
@property (retain, nonatomic) NSDictionary *deliveryStatusContext;
@property (readonly, nonatomic) NSString *localURI;
@property (readonly, nonatomic) NSString *remoteURI;
@property (readonly, nonatomic) NSData *queryHash;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)initWithGUID:(id)a0 service:(id)a1 certifiedDeliveryVersion:(long long)a2 certifiedDeliveryRTS:(id)a3 senderToken:(id)a4 failureReason:(id)a5 failureReasonMessage:(id)a6 replayKey:(id)a7 generateDeliveryReceipt:(BOOL)a8 deliveryStatusContext:(id)a9 localURI:(id)a10 remoteURI:(id)a11 queryHash:(id)a12;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)description;
- (id)initWithGUID:(id)a0 service:(id)a1 certifiedDeliveryVersion:(long long)a2 certifiedDeliveryRTS:(id)a3 senderToken:(id)a4;
- (id)initWithGUID:(id)a0 service:(id)a1 certifiedDeliveryVersion:(long long)a2 certifiedDeliveryRTS:(id)a3 senderToken:(id)a4 localURI:(id)a5 remoteURI:(id)a6;
- (id)initWithGUID:(id)a0 service:(id)a1 certifiedDeliveryVersion:(long long)a2 certifiedDeliveryRTS:(id)a3 senderToken:(id)a4 failureReason:(id)a5 failureReasonMessage:(id)a6;
- (id)initWithCertifiedDeliveryContext:(id)a0 queryHash:(id)a1;
- (id)initWithGUID:(id)a0 service:(id)a1 certifiedDeliveryVersion:(long long)a2 certifiedDeliveryRTS:(id)a3 senderToken:(id)a4 localURI:(id)a5 remoteURI:(id)a6 replayKey:(id)a7;

@end
