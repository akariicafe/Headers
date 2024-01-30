@class BSAtomicSignal, NSString, BSXPCServiceConnection, _BSServiceConnectionConfiguration, BSProcessHandle, RBSTarget;
@protocol BSServiceConnectionContext, NSCopying;

@interface BSServiceConnection : NSObject <BSServiceConnectionClient, BSServiceConnectionHost, BSServiceConnectionContext, BSXPCServiceConnectionMessaging, BSInvalidatable> {
    BSXPCServiceConnection *_connection;
    NSString *_name;
    id<NSCopying> _userInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _BSServiceConnectionConfiguration *_lock_config;
    BSAtomicSignal *_lock_activatedSignal;
    BOOL _lock_invalidated;
    BOOL _lock_noAssertInvalidatedOnDealloc;
    BOOL _requiresMessagingAfterHandshake;
}

@property (class, readonly, nonatomic) BSServiceConnection<BSServiceConnectionContext> *currentContext;

@property (readonly, nonatomic) BSProcessHandle *remoteProcess;
@property (readonly, copy, nonatomic) NSString *service;
@property (readonly, copy, nonatomic) NSString *instance;
@property (readonly, copy, nonatomic) id<NSCopying> userInfo;
@property (readonly, nonatomic) id remoteTarget;
@property (readonly, nonatomic) RBSTarget *remoteAssertionTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectionWithEndpoint:(id)a0 clientContextBuilder:(id /* block */)a1;
+ (id)NSXPCConnectionWithEndpoint:(id)a0 clientContextBuilder:(id /* block */)a1 configurator:(id /* block */)a2;
+ (id)NSXPCConnectionWithEndpoint:(id)a0 configurator:(id /* block */)a1;
+ (id)connectionWithEndpoint:(id)a0;

- (id)createMessage;
- (id)extractNSXPCConnectionWithConfigurator:(id /* block */)a0;
- (id)remoteTargetWithLaunchingAssertionAttributes:(id)a0;
- (void)dealloc;
- (id)createMessageWithCompletion:(id /* block */)a0;
- (void)_configureConnection:(id /* block */)a0;
- (id)init;
- (void)activate;
- (void)invalidate;
- (id)remoteTargetWithAssertionAttributes:(id)a0;
- (void)configureConnection:(id /* block */)a0;
- (void).cxx_destruct;

@end
