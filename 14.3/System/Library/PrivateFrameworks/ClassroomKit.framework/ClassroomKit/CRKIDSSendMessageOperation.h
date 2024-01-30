@class NSDictionary, NSString, NSDate;
@protocol CRKIDSListener, CRKIDSLocalPrimitives;

@interface CRKIDSSendMessageOperation : CATOperation

@property (readonly, nonatomic) id<CRKIDSLocalPrimitives> IDSLocalPrimitives;
@property (readonly, copy, nonatomic) NSDictionary *message;
@property (readonly, copy, nonatomic) NSString *destinationAddress;
@property (retain, nonatomic) id<CRKIDSListener> messageSendListener;
@property (copy, nonatomic) NSString *messageSendIdentifier;
@property (retain, nonatomic) NSDate *initialSendDate;

- (void)cancel;
- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (void)didSendMessageWithIdentifier:(id)a0 sendSuccess:(BOOL)a1 error:(id)a2;
- (id)initWithIDSLocalPrimitives:(id)a0 message:(id)a1 destinationAddress:(id)a2;

@end
