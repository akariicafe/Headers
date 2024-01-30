@class SASProximitySessionTransport, CUMessageSession, NSObject;
@protocol OS_dispatch_queue, SASProximitySessionDelegate;

@interface SASProximitySession : NSObject

@property (retain) NSObject<OS_dispatch_queue> *actionQueue;
@property (retain) SASProximitySessionTransport *transport;
@property id<SASProximitySessionDelegate> delegate;
@property (retain) CUMessageSession *sharingMessageSession;
@property (getter=isConnected) BOOL connected;

- (id)init;
- (void).cxx_destruct;
- (void)activate;
- (id)sendAction:(id)a0;
- (void)invalidate;
- (void)handleAction:(id)a0;
- (void)receivedAction:(id)a0 response:(id /* block */)a1;
- (id)actionFromData:(id)a0;

@end
