@class NSString, SKStepWiFiSetupServer, NSObject;
@protocol OS_dispatch_queue;

@interface SKSetupHomeKitServer : NSObject <CUActivatable, CUAuthenticatableServer, CULabelable, CUMessaging> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SKStepWiFiSetupServer *_stepWiFiSetup;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ authCompletionHandler;
@property (copy, nonatomic) id /* block */ authHidePasswordHandler;
@property (copy, nonatomic) id /* block */ authShowPasswordHandler;
@property (copy, nonatomic) NSString *password;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *label;

- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)invalidate;
- (void)registerEventID:(id)a0 options:(id)a1 eventHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)deregisterEventID:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendEventID:(id)a0 eventMessage:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)registerRequestID:(id)a0 options:(id)a1 requestHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)deregisterRequestID:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendRequestID:(id)a0 requestMessage:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;

@end
