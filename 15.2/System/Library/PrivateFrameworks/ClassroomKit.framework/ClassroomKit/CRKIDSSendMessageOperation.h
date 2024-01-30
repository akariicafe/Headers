@class NSString, NSDictionary, CRKIDSMessageOptions, NSDate;
@protocol CRKResumable, CRKCancelable, CRKIDSLocalPrimitives;

@interface CRKIDSSendMessageOperation : CATOperation

@property (readonly, nonatomic) id<CRKIDSLocalPrimitives> IDSLocalPrimitives;
@property (readonly, copy, nonatomic) NSDictionary *message;
@property (readonly, copy, nonatomic) NSString *destinationAddress;
@property (readonly, copy, nonatomic) NSString *sourceAppleID;
@property (readonly, nonatomic) CRKIDSMessageOptions *options;
@property (retain, nonatomic) id<CRKCancelable, CRKResumable> messageSendSubscription;
@property (copy, nonatomic) NSString *messageSendIdentifier;
@property (retain, nonatomic) NSDate *initialSendDate;

- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (void)didSendMessageWithIdentifier:(id)a0 sendSuccess:(BOOL)a1 error:(id)a2;
- (id)initWithIDSLocalPrimitives:(id)a0 message:(id)a1 destinationAddress:(id)a2 sourceAppleID:(id)a3 options:(id)a4;

@end
