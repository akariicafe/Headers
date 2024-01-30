@class DMFControlGroupIdentifier, NSString, NSData;
@protocol CRKIDSAddressTranslator, CRKIDSPrimitives, CRKCancelable;

@interface CRKFetchASMCertificatesOperation : CATOperation

@property (readonly, nonatomic) id<CRKIDSPrimitives> IDSPrimitives;
@property (readonly, nonatomic) id<CRKIDSAddressTranslator> addressTranslator;
@property (readonly, nonatomic) DMFControlGroupIdentifier *controlGroupIdentifier;
@property (readonly, copy, nonatomic) NSString *destinationAppleID;
@property (readonly, copy, nonatomic) NSString *sourceAppleID;
@property (readonly, copy, nonatomic) NSString *destinationDeviceIdentifier;
@property (readonly, nonatomic) long long sourceRole;
@property (readonly, nonatomic) long long destinationRole;
@property (readonly, copy, nonatomic) NSData *requesterCertificate;
@property (retain, nonatomic) id<CRKCancelable> messageReceiveSubscription;

- (void)main;
- (void)operationWillFinish;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)didSendMessage:(id)a0;
- (id)initWithIDSPrimitives:(id)a0 addressTranslator:(id)a1 controlGroupIdentifier:(id)a2 destinationAppleID:(id)a3 sourceAppleID:(id)a4 destinationDeviceIdentifier:(id)a5 sourceRole:(long long)a6 destinationRole:(long long)a7 requesterCertificate:(id)a8;
- (void)processMessage:(id)a0 senderAppleID:(id)a1 requestIdentifier:(id)a2;

@end
