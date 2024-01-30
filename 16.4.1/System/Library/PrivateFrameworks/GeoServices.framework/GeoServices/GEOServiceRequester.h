@class NSMapTable;

@interface GEOServiceRequester : NSObject {
    NSMapTable *_pendingRequests;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingRequestsLock;
}

@property (retain) Class operationClass;

- (id)_validateResponse:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_cancelRequest:(id)a0;
- (id)_keyForRequest:(id)a0;
- (void)_addOperation:(id)a0 forRequest:(id)a1;
- (id)_removeOperationForRequest:(id)a0;
- (void)_startWithRequest:(id)a0 traits:(id)a1 auditToken:(id)a2 config:(id)a3 throttleToken:(id)a4 completionHandler:(id /* block */)a5;
- (void)_startWithRequest:(id)a0 traits:(id)a1 auditToken:(id)a2 config:(id)a3 throttleToken:(id)a4 willSendRequestHandler:(id /* block */)a5 completionHandler:(id /* block */)a6;

@end
