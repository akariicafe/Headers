@class CATMessage;
@protocol CATSharingConnection;

@interface CATSharingServiceTransportSendMessageOperation : CATOperation {
    id<CATSharingConnection> mConnection;
    CATMessage *mMessage;
}

- (BOOL)isAsynchronous;
- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (void)sendMessage;
- (id)initWithConnection:(id)a0 message:(id)a1;
- (void)didSendMessageWithError:(id)a0;

@end
