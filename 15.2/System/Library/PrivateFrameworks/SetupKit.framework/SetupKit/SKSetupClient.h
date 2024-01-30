@class SKConnection, NSString, CUNANEndpoint, NSMutableDictionary, NSObject, NSMutableArray, SKDevice, CUNANSubscriber;
@protocol OS_dispatch_queue, SKStepable;

@interface SKSetupClient : NSObject <CUActivatable, CUAuthenticatableClient, CULabelable, CUMessaging> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    CUNANEndpoint *_nanEndpoint;
    CUNANSubscriber *_nanSubscriber;
    NSMutableDictionary *_registeredEvents;
    NSMutableDictionary *_registeredRequests;
    int _runState;
    SKConnection *_skCnx;
    NSMutableArray *_stepArray;
    NSObject<SKStepable> *_stepCurrent;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (nonatomic) unsigned int controlFlags;
@property (copy, nonatomic) id /* block */ overallCompletionHandler;
@property (retain, nonatomic) SKDevice *peerDevice;
@property (nonatomic) int setupType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ authCompletionHandler;
@property (copy, nonatomic) id /* block */ authPromptHandler;
@property (copy, nonatomic) NSString *password;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *label;

- (void)_activateWithCompletion:(id /* block */)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)addStep:(id)a0;
- (void).cxx_destruct;
- (void)_completeWithError:(id)a0;
- (id)init;
- (void)invalidate;
- (void)_run;
- (void)_invalidated;
- (void)dealloc;
- (void)tryPassword:(id)a0;
- (void)_receivedEventID:(id)a0 event:(id)a1 options:(id)a2;
- (void)_receivedRequestID:(id)a0 request:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;
- (void)registerEventID:(id)a0 options:(id)a1 eventHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)deregisterEventID:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendEventID:(id)a0 eventMessage:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)registerRequestID:(id)a0 options:(id)a1 requestHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)deregisterRequestID:(id)a0 completionHandler:(id /* block */)a1;
- (void)sendRequestID:(id)a0 requestMessage:(id)a1 options:(id)a2 responseHandler:(id /* block */)a3;
- (void)_activateBLEWithCompletion:(id /* block */)a0;
- (void)_activateNANWithCompletion:(id /* block */)a0;
- (void)_activateNANContinueWithError:(id)a0;
- (void)_setupConnectionCommon:(id)a0;
- (void)_addStep:(id)a0;
- (void)_completedStep:(id)a0 error:(id)a1;
- (void)_prepareSteps;
- (void)_prepareStepsCaptiveNetworkJoin;
- (void)_prepareStepsOSRecovery;
- (void)_prepareStepsWatchSetup;
- (BOOL)_runSteps;

@end
