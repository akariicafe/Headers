@class SFSession, NSString, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface HDSDeviceActivationOperation : NSObject <SignpostProviding>

@property (class, readonly) NSObject<OS_os_log> *signpostLog;

@property (nonatomic) unsigned long long startTicks;
@property (nonatomic) double metricTotalSeconds;
@property (retain, nonatomic) SFSession *sfSession;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long signpostID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activate;
- (void).cxx_destruct;
- (void)_finishWithResult:(long long)a0 error:(id)a1;
- (void)_beginActivationWithCompletion:(id /* block */)a0;
- (void)_checkActivationStateWithCompletion:(id /* block */)a0;
- (void)_continueActivationWithSessionData:(id)a0 completion:(id /* block */)a1;
- (void)_finishActivation:(id)a0 responseHeader:(id)a1 completion:(id /* block */)a2;
- (void)_performActivationWithCompletion:(id /* block */)a0;
- (void)_sendActivationURLRequest:(id)a0 completion:(id /* block */)a1;

@end
