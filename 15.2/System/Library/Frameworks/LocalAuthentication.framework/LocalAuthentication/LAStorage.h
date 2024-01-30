@class LAContext, NSXPCConnection;
@protocol LASecureStorageService;

@interface LAStorage : NSObject

@property (class, readonly) unsigned int newInstanceId;

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<LASecureStorageService> remoteObjectProxy;
@property (readonly, nonatomic) unsigned int instanceId;
@property (readonly, nonatomic) long long domain;
@property (readonly, nonatomic) LAContext *authenticationContext;

+ (id)objectDescription:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_resetConnection;
- (BOOL)boolForKey:(long long)a0 error:(id *)a1;
- (void)objectForKey:(long long)a0 completionHandler:(id /* block */)a1;
- (void)setObject:(id)a0 forKey:(long long)a1 completionHandler:(id /* block */)a2;
- (id)initWithDomain:(long long)a0 authenticationContext:(id)a1;
- (long long)_authenticationPolicyForKey:(long long)a0 selector:(SEL)a1;
- (void)_bootstrapServiceWithAuthenticationPolicy:(long long)a0 proxyBlock:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)removeObjectForKey:(long long)a0 completionHandler:(id /* block */)a1;
- (void)setBool:(BOOL)a0 forKey:(long long)a1 completionHandler:(id /* block */)a2;
- (void)boolForKey:(long long)a0 completionHandler:(id /* block */)a1;
- (void)_callProxyBlock:(id /* block */)a0 authenticationPolicy:(long long)a1 completionHandler:(id /* block */)a2;
- (void)_connectToEndpoint:(id)a0;
- (void)_bootstrapServiceType:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)setBool:(BOOL)a0 forKey:(long long)a1 error:(id *)a2;

@end
