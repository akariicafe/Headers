@class CNAuthorizationContext;

@interface CNAuthorization : NSObject

@property (readonly, nonatomic) CNAuthorizationContext *authorizationContext;

+ (id)logger;

- (id)initWithAssumedIdentity:(id)a0;
- (void)requestAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
- (BOOL)requestAccessForEntityType:(long long)a0 error:(id *)a1;
- (BOOL)isAccessRestrictedForEntityType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAuthorizationContext:(id)a0;
- (long long)authorizationStatusForEntityType:(long long)a0;

@end
