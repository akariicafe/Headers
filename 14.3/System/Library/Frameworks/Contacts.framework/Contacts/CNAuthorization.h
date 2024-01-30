@interface CNAuthorization : NSObject

+ (long long)authorizationStatusForEntityType:(long long)a0;
+ (BOOL)requestAccessForEntityType:(long long)a0 error:(id *)a1;
+ (void)requestAccessForEntityType:(long long)a0 completionHandler:(id /* block */)a1;
+ (id)logger;
+ (BOOL)isAccessRestrictedForEntityType:(long long)a0;

@end
