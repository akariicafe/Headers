@class CATXPCTransport, CATMessage;

@interface _CATXPCTransportSendMessageOperation : CATOperation

@property (weak, nonatomic) CATXPCTransport *transport;
@property (retain, nonatomic) CATMessage *message;

- (BOOL)isAsynchronous;
- (void)didFailWithError:(id)a0;
- (void)didProcessMessage;
- (void)main;
- (void).cxx_destruct;

@end
