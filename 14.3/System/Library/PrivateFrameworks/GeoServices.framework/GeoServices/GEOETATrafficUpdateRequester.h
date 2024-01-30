@interface GEOETATrafficUpdateRequester : NSObject

- (void)cancelRequest:(id)a0;
- (void)sendConditionalETATrafficUpdateRequest:(id)a0 timeWindowDuration:(double)a1 auditToken:(id)a2 throttleToken:(id)a3 willSendRequestHandler:(id /* block */)a4 finishedHandler:(id /* block */)a5;
- (void)sendETATrafficUpdateRequest:(id)a0 auditToken:(id)a1 throttleToken:(id)a2 finishedHandler:(id /* block */)a3;

@end
