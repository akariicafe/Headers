@class CNAuthorizationContext;

@interface CNAuthorization : NSObject

@property (readonly, nonatomic) CNAuthorizationContext *authorizationContext;

+ (id)logger;

- (BOOL)requestAccessForEntityType:(long long)a0 error:(id *)a1;
- (id)init;
- (void)requestAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
- (id)initWithAssumedIdentity:(id)a0;
- (BOOL)isAccessRestrictedForEntityType:(long long)a0;
- (id)initWithAuthorizationContext:(id)a0;
- (long long)authorizationStatusForEntityType:(long long)a0;
- (void).cxx_destruct;

@end
