@class SFSession, NSObject;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupActivationOperation : NSObject

@property (nonatomic) unsigned long long startTicks;
@property (nonatomic) double metricTotalSeconds;
@property (retain, nonatomic) SFSession *sfSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)activate;
- (void)_finishWithResult:(long long)a0 error:(id)a1;
- (void)_performActivationWithCompletion:(id /* block */)a0;
- (void)_checkActivationStateWithCompletion:(id /* block */)a0;
- (void)_finishActivation:(id)a0 responseHeader:(id)a1 completion:(id /* block */)a2;
- (void)_sendActivationURLRequest:(id)a0 completion:(id /* block */)a1;
- (void)_beginActivationWithCompletion:(id /* block */)a0;
- (void)_continueActivationWithSessionData:(id)a0 completion:(id /* block */)a1;

@end
