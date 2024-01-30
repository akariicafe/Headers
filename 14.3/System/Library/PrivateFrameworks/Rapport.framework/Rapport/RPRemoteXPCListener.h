@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface RPRemoteXPCListener : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (copy, nonatomic) id /* block */ acceptHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, copy, nonatomic) NSString *serviceName;

- (id)init;
- (void).cxx_destruct;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;

@end
