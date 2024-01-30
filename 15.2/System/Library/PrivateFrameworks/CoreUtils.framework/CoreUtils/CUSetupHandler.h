@class CUEnvironment, NSObject;
@protocol OS_dispatch_queue;

@interface CUSetupHandler : NSObject <CUActivatable, CUEnvironmentable> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (retain, nonatomic) CUEnvironment *environment;

- (void)_activateWithCompletion:(id /* block */)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)_invalidated;

@end
