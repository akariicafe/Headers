@class NSObject;
@protocol OS_xpc_object;

@interface IMDMessageServicesCenter : NSObject {
    NSObject<OS_xpc_object> *_connection;
}

+ (id)sharedInstance;

- (BOOL)_disconnect;
- (void)requestExpireStateWithCompletion:(id /* block */)a0;
- (void)_requestExpireStateWithGUID:(id)a0 handler:(id /* block */)a1;
- (void)_disconnected;
- (void)requestWatchdogForMessageGuid:(id)a0 completionBlock:(id /* block */)a1;
- (void)_requestWatchdogWithGUID:(id)a0 handler:(id /* block */)a1;
- (void)requestRoutingWithCompletion:(id /* block */)a0;
- (void)requestRoutingForMessageGuid:(id)a0 inChat:(id)a1 error:(unsigned int)a2 completionBlock:(id /* block */)a3;
- (BOOL)_connect;
- (id)init;
- (void)requestExpireStateForMessageGuid:(id)a0 completionBlock:(id /* block */)a1;
- (void)_requestRoutingWithGUID:(id)a0 chatGUID:(id)a1 error:(unsigned int)a2 handler:(id /* block */)a3;
- (void)requestWatchdogWithCompletion:(id /* block */)a0;
- (void)dealloc;

@end
