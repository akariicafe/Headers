@class NSString, NSURL, NSOperationQueue, JSContext, VSStateMachine, NSObject, NSMutableArray, VSSingleThreadDispatchQueue;
@protocol OS_dispatch_source, VSJSAppDelegate;

@interface VSJSApp : NSObject <VSStateMachineDelegate>

@property (retain, nonatomic) NSString *script;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSURL *effectiveURL;
@property (retain, nonatomic) VSSingleThreadDispatchQueue *jsSingleThreadQueue;
@property (retain, nonatomic) JSContext *context;
@property (retain, nonatomic) VSStateMachine *stateMachine;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *watchdog;
@property (retain, nonatomic) NSMutableArray *scriptEvaluators;
@property (weak, nonatomic) id<VSJSAppDelegate> delegate;
@property (nonatomic) long long state;
@property (nonatomic) BOOL enforceSystemTrust;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentContext;

- (void)evaluateScript:(id)a0 withSourceURL:(id)a1;
- (id)_errorWithCode:(long long)a0 underlyingError:(id)a1;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)_invokeOnLaunch;
- (void)_configureWatchdogWithSeconds:(unsigned long long)a0;
- (id)_exceptionErrorWithCode:(long long)a0;
- (void)_initializeContext;
- (void)_invokeOnExit;
- (void)evaluateWithBlock:(id /* block */)a0;
- (id)initWithScriptURL:(id)a0;
- (void)setExceptionWithMessage:(id)a0;
- (void)transitionToErrorState;
- (void)transitionToReadyState;
- (void)transitionToStoppedState;
- (void)transitionToWaitingForBootScriptState;
- (void)transitionToWaitingForBootUrlState;
- (void)transitionToWaitingForOnExitCallbackState;
- (void)transitionToWaitingForOnLaunchCallbackState;

@end
