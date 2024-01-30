@class CUMessageSession;

@interface SASProximitySessionSharingTransport : SASProximitySessionTransport

@property (retain) CUMessageSession *messageSession;
@property (retain) CUMessageSession *actionMessageSession;

- (id)initWithMessageSession:(id)a0;
- (void).cxx_destruct;
- (void)activate;
- (void)invalidate;
- (void)sendData:(id)a0 response:(id /* block */)a1;

@end
