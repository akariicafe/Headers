@class NSString, BSXPCServiceConnection, _BSServiceConnectionConfiguration, BSProcessHandle, BSAtomicSignal;
@protocol BSServiceConnectionContext, NSCopying;

@interface BSServiceConnection : NSObject <BSServiceConnectionContext, BSXPCServiceConnectionMessaging, BSInvalidatable> {
    BSXPCServiceConnection *_connection;
    id<NSCopying> _userInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _BSServiceConnectionConfiguration *_lock_config;
    BSAtomicSignal *_lock_activatedSignal;
    BOOL _lock_invalidated;
    BOOL _lock_noAssertInvalidatedOnDealloc;
}

@property (class, readonly, nonatomic) BSServiceConnection<BSServiceConnectionContext> *currentContext;

@property (readonly, nonatomic) BSProcessHandle *remoteProcess;
@property (readonly, copy, nonatomic) NSString *service;
@property (readonly, copy, nonatomic) NSString *instance;
@property (readonly, nonatomic) id remoteTarget;
@property (readonly, nonatomic) id<NSCopying> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)connectionWithEndpoint:(id)a0 clientContextBuilder:(id /* block */)a1;
+ (id)connectionWithEndpoint:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)activate;
- (id)createMessageWithCompletion:(id /* block */)a0;
- (void)_configureConnection:(id /* block */)a0;
- (void)configureConnection:(id /* block */)a0;
- (id)createMessage;
- (void)invalidate;

@end
