@class CATIDSServiceConnection, CATMessage, CATIDSServiceTransport;

@interface _CATIDSServiceTransportSendMessageOperation : CATOperation {
    CATIDSServiceTransport *mTransport;
    CATIDSServiceConnection *mConnection;
    CATMessage *mMessage;
}

- (void)main;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (void)sendData;
- (void)didSendDataWithError:(id)a0;
- (id)initWithConnection:(id)a0 message:(id)a1;

@end
