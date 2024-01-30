@class NSString, BSServiceInterface, BSServiceQuality, NSObject;
@protocol OS_xpc_object, BSServiceDispatchingQueue, NSCopying, OS_dispatch_queue;

@interface _BSServiceConnectionConfiguration : NSObject <BSServiceConnectionInternalConfiguring, BSServiceConnectionConfiguring_DispatchingQueue> {
    struct os_unfair_lock_s { unsigned int x0; } *_lock;
    NSObject<OS_xpc_object> *_clientContext;
    id<NSCopying> _userInfo;
    NSString *_name;
    BSServiceQuality *_serviceQuality;
    BSServiceInterface *_interface;
    id _target;
    id /* block */ _activationHandler;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
    NSObject<OS_dispatch_queue> *_targetQueue;
    id<BSServiceDispatchingQueue> _targetDispatchingQueue;
    id /* block */ _messageHandler;
    id /* block */ _errorHandler;
}

- (void)setMessageHandler:(id /* block */)a0;
- (void)setErrorHandler:(id /* block */)a0;
- (void)setTargetQueue:(id)a0;
- (id)interface;
- (void)setInterfaceTarget:(id)a0;
- (void)setInterruptionHandler:(id /* block */)a0;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (void)setServiceQuality:(id)a0;
- (void)setActivationHandler:(id /* block */)a0;
- (void)setTargetDispatchingQueue:(id)a0;
- (void)setInterface:(id)a0;
- (void)setInvalidationHandler:(id /* block */)a0;
- (void)setUserInfo:(id)a0;

@end
