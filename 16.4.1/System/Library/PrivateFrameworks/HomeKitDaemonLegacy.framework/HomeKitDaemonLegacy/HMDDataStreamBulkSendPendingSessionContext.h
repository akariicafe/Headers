@class HMFTimer;

@interface HMDDataStreamBulkSendPendingSessionContext : NSObject

@property (readonly) id /* block */ sessionStartCallback;
@property (retain) HMFTimer *handleOpenRequestResponseTimer;
@property (retain) HMFTimer *sendCloseEventTimer;
@property (readonly) BOOL shouldCloseSessionWithTimeoutReason;

- (void).cxx_destruct;
- (id)initWithSessionStartCallback:(id /* block */)a0 handleOpenRequestResponseTimer:(id)a1 sendCloseEventTimer:(id)a2;

@end
