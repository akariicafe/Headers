@class NSMutableArray, CATIDSServiceConnection;

@interface CATIDSServiceTransport : CATTransport <CATIDSServiceConnectionDelegate> {
    CATIDSServiceConnection *mConnection;
    NSMutableArray *mReceiveQueue;
    BOOL mIsActive;
    BOOL mDidDelegateInvalidation;
}

- (void)invalidateConnection;
- (void)resumeConnection;
- (id)operationToSendMessage:(id)a0;
- (void)suspendConnection;
- (void)tryReportingInvalidation;
- (void)connection:(id)a0 receivedData:(id)a1;
- (void)serviceReceiveQueue;
- (id)initWithConnection:(id)a0;
- (void)connectionClosed:(id)a0;
- (void).cxx_destruct;
- (id)name;

@end
