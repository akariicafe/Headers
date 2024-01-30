@class CNAuthorizationContext;

@interface CNAccessAuthorization : NSObject

@property (readonly, nonatomic) CNAuthorizationContext *authorizer;

+ (id)new;
+ (id)allAuthorizationKeys;

- (BOOL)authorizeFetchRequest:(id)a0 accessError:(id *)a1;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAuthorizer:(id)a0;
- (id)authorizedKeysForContactKeys:(id)a0;
- (void)performWork:(id /* block */)a0 authorizingFetchRequest:(id)a1 failureHandler:(id /* block */)a2;
- (void)removeUnauthorizedKeysFromFetchRequest:(id)a0;

@end
