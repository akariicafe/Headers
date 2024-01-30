@class SASProximitySessionTransport, CUMessageSession, NSObject;
@protocol OS_dispatch_queue, SASProximitySessionDelegate;

@interface SASProximitySession : NSObject

@property (retain) NSObject<OS_dispatch_queue> *actionQueue;
@property (retain) SASProximitySessionTransport *transport;
@property id<SASProximitySessionDelegate> delegate;
@property (retain) CUMessageSession *sharingMessageSession;
@property (getter=isConnected) BOOL connected;

- (id)sendAction:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (void)invalidate;
- (void)handleAction:(id)a0;
- (void)receivedAction:(id)a0 response:(id /* block */)a1;
- (id)actionFromData:(id)a0;

@end
