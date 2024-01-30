@class CATXPCTransport, CATMessage;

@interface _CATXPCTransportSendMessageOperation : CATOperation

@property (weak, nonatomic) CATXPCTransport *transport;
@property (retain, nonatomic) CATMessage *message;

- (void).cxx_destruct;
- (void)main;
- (void)didFailWithError:(id)a0;
- (BOOL)isAsynchronous;
- (void)didProcessMessage;

@end
