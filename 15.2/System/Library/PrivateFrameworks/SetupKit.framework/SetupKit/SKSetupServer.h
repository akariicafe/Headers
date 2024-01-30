@class SKConnection, NSString, CBAdvertiser, NSMutableDictionary, CUNANPublisher, NSObject, NSMutableArray, CBServer;
@protocol OS_dispatch_queue;

@interface SKSetupServer : NSObject <CUActivatable, CUAuthenticatableServer, CULabelable, CUMessaging> {
    BOOL _activateCalled;
    unsigned short _bleAdvertisePSM;
    CBAdvertiser *_bleAdvertiser;
    CBServer *_bleServer;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSString *_nanEndpointID;
    CUNANPublisher *_nanPublisher;
    NSMutableDictionary *_registeredEvents;
    NSMutableDictionary *_registeredRequests;
    SKConnection *_skCnx;
    NSMutableArray *_stepArray;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (nonatomic) unsigned int controlFlags;
@property (copy, nonatomic) id /* block */ overallCompletionHandler;
@property (nonatomic) int setupType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ authCompletionHandler;
@property (copy, nonatomic) id /* block */ authHidePasswordHandler;
@property (copy, nonatomic) id /* block */ authShowPasswordHandler;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) int passwordType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *label;

- (void)_activateWithCompletion:(id /* block */)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)descriptionWithLevel:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)_update;
- (void)_invalidated;
- (void)dealloc;
- (void)_receivedEventID:(id)a0 event:(id)a1 options:(id)a2;
- (void)_receivedRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;
- (void)registerEventID:(id)a0 options:(id)a1 eventHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)deregisterEventID:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendEventID:(id)a0 eventMessage:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)registerRequestID:(id)a0 options:(id)a1 requestHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)deregisterRequestID:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendRequestID:(id)a0 requestMessage:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;
- (void)_addStep:(id)a0;
- (void)_prepareSteps;
- (void)_prepareStepsCaptiveNetworkJoin;
- (void)_prepareStepsOSRecovery;
- (void)_prepareStepsWatchSetup;
- (void)_invalidateSteps;
- (BOOL)_bleAdvertiserShouldRun;
- (void)_bleAdvertiserEnsureStarted;
- (void)_bleAdvertiserEnsureStopped;
- (void)_bleServerEnsureStarted;
- (void)_bleServerEnsureStopped;
- (void)_nanPublisherEnsureStarted;
- (void)_nanPublisherEnsureStopped;
- (void)_handleAcceptBLEConnection:(id)a0;
- (void)_handleAcceptNANData:(id)a0 endpoint:(id)a1;
- (void)_handleAcceptCommon:(id)a0;

@end
