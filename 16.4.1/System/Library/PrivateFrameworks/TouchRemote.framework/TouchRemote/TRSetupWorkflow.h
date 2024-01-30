@class TRSession, NSSet, TRNearbyDevice, TROperationQueue, UIViewController;

@interface TRSetupWorkflow : NSObject

@property (retain, nonatomic) TRNearbyDevice *nearbyDevice;
@property unsigned long long state;
@property (retain) TRSession *session;
@property (retain, nonatomic) NSSet *unauthenticatedAccountServices;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) TROperationQueue *operationQueue;
@property (copy, nonatomic) id /* block */ startedHandler;
@property (copy, nonatomic) id /* block */ configurationStageStartedHandler;
@property (copy, nonatomic) id /* block */ networkStageStartedHandler;
@property (copy, nonatomic) id /* block */ activationStageStartedHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ failureHandler;

+ (void)initialize;

- (void)cancel;
- (void)start;
- (void).cxx_destruct;
- (void)_performAuthenticationOperation;
- (void)_abortSetupWithErrorCode:(long long)a0 userInfo:(id)a1;
- (void)_performActivationOperation;
- (void)_performCompletionOperation;
- (void)_performConfigurationOperation;
- (void)_performHandshakeOperation;
- (void)_performNetworkOperation;
- (void)_releaseHandlers;
- (id)initWithNearbyDevice:(id)a0 presentingViewController:(id)a1;

@end
