@class CUEnvironment, NSObject;
@protocol OS_dispatch_queue;

@interface CUSetupHandler : NSObject <CUActivatable, CUEnvironmentable> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) CUEnvironment *environment;

- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;

@end
