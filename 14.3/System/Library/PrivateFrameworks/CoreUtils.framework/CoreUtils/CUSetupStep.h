@class NSObject, CUEnvironment, CUSetupFlow;
@protocol OS_dispatch_queue;

@interface CUSetupStep : NSObject <CUActivatable, CUEnvironmentable> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    int _runState;
}

@property (retain, nonatomic) CUSetupFlow *setupFlow;
@property (nonatomic) unsigned long long setupFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) CUEnvironment *environment;

- (BOOL)run;
- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (BOOL)runAndReturnError:(id *)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;

@end
