@class NSString, BSServiceConnectionEndpoint, BSServiceManager;
@protocol BSServiceConnectionListenerDelegate, BSInvalidatable;

@interface BSServiceConnectionListener : NSObject <BSServiceConnectionListenerConfiguring, BSServiceListener, BSInvalidatable> {
    BSServiceManager *_manager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BSServiceConnectionListenerDelegate> _lock_delegate;
    BOOL _lock_activated;
    BOOL _lock_invalidated;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _registrationLock;
    id<BSInvalidatable> _registrationLock_assertion;
}

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *service;
@property (readonly, copy, nonatomic) NSString *instance;
@property (readonly, copy, nonatomic) BSServiceConnectionEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)listenerWithConfigurator:(id /* block */)a0;
+ (id)extendBootstrap;

- (void)setInstance:(id)a0;
- (id)init;
- (void)setDomain:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)activate;
- (void)setService:(id)a0;
- (void)setDelegate:(id)a0;
- (void)didReceiveConnection:(id)a0;
- (void)invalidate;

@end
