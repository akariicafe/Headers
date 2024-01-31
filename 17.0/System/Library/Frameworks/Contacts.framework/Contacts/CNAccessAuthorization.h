@class CNAuthorizationContext;

@interface CNAccessAuthorization : NSObject

@property (readonly, nonatomic) CNAuthorizationContext *authorizer;

+ (id)allAuthorizationKeysVector;
+ (id)allAuthorizationKeys;
+ (id)new;
+ (BOOL)canSetContactProperty:(id)a0;
+ (void)removeUnavailableKeysFromContactKeyVector:(id)a0;
+ (id)unauthorizedKeysWithAuthorizer:(id)a0;
+ (id)unauthorizedKeysVectorWithAuthorizer:(id)a0;

- (id)initWithAuditToken:(id)a0;
- (id)init;
- (id)unauthorizedKeysVector;
- (id)initWithAuthorizer:(id)a0;
- (void)resetUnauthorizedKeysForFetchRequest:(id)a0;
- (id)initWithAuditToken:(id)a0 assumedIdentity:(id)a1;
- (BOOL)authorizeFetchRequest:(id)a0 accessError:(id *)a1;
- (void).cxx_destruct;
- (id)authorizedKeysForContactKeys:(id)a0;
- (void)performWork:(id /* block */)a0 authorizingFetchRequest:(id)a1 failureHandler:(id /* block */)a2;

@end
