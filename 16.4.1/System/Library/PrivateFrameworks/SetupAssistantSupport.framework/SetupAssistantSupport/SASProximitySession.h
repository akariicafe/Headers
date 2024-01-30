@class SASProximitySessionTransport, CUMessageSession, NSObject;
@protocol OS_dispatch_queue, SASProximitySessionDelegate;

@interface SASProximitySession : NSObject

@property (retain) NSObject<OS_dispatch_queue> *actionQueue;
@property (retain) SASProximitySessionTransport *transport;
@property id<SASProximitySessionDelegate> delegate;
@property (retain) CUMessageSession *sharingMessageSession;
@property (getter=isConnected) BOOL connected;

- (id)sendAction:(id)a0;
- (id)init;
- (void)activate;
- (void)invalidate;
- (void).cxx_destruct;
- (void)handleAction:(id)a0;
- (id)actionFromData:(id)a0;
- (void)receivedAction:(id)a0 response:(id /* block */)a1;

@end
