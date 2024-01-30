@class CUEndpoint, CUEnvironment, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface CUSetupFlow : NSObject <CUActivatable, CUEnvironmentable> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableArray *_stepArray;
}

@property (copy, nonatomic) id /* block */ errorHandler;
@property (retain, nonatomic) CUEndpoint *peerEndpoint;
@property (copy, nonatomic) id /* block */ runHandler;
@property (nonatomic) unsigned long long setupFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) CUEnvironment *environment;

- (BOOL)run;
- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)addStep:(id)a0;
- (void)_invalidated;
- (void)_invalidate;
- (void)reportError:(id)a0;
- (void)invalidate;

@end
