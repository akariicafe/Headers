@class CATRemoteTransport, CATMessage;

@interface _CATRemoteTransportSendMessageOperation : CATOperation

@property (weak, nonatomic) CATRemoteTransport *transport;
@property (retain, nonatomic) CATMessage *message;

- (void).cxx_destruct;
- (void)main;
- (void)didFailWithError:(id)a0;
- (BOOL)isAsynchronous;
- (void)didSendData;
- (void)didEncodeData:(id)a0;

@end
