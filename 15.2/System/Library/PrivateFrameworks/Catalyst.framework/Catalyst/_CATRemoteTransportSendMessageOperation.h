@class CATRemoteTransport, CATMessage;

@interface _CATRemoteTransportSendMessageOperation : CATOperation

@property (weak, nonatomic) CATRemoteTransport *transport;
@property (retain, nonatomic) CATMessage *message;

- (BOOL)isAsynchronous;
- (void)didFailWithError:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (void)didSendData;
- (void)didEncodeData:(id)a0;

@end
