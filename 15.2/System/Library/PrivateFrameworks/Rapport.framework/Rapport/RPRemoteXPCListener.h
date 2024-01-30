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

- (void)_activateWithCompletion:(id /* block */)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidate;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)_invalidated;

@end
