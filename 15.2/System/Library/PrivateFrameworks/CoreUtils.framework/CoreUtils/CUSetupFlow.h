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

- (void)_activateWithCompletion:(id /* block */)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (BOOL)run;
- (void)_invalidate;
- (void)addStep:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reportError:(id)a0;
- (void)invalidate;
- (void)_invalidated;

@end
