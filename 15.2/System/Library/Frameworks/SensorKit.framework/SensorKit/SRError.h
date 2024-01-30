@interface SRError : NSObject

+ (id)errorWithCode:(long long)a0;
+ (id)authorizationError;
+ (id)invalidInfoPlistErrorWithMissingKey:(id)a0 code:(long long)a1;
+ (id)errorWithCode:(long long)a0 description:(id)a1 recoverySuggestion:(id)a2;
+ (id)errorWithCode:(long long)a0 description:(id)a1 recoverySuggestion:(id)a2 underlyingError:(id)a3;
+ (id)connectionNotFoundError;
+ (id)invalidEntitlementError;
+ (id)authorizationErrorWithStatus:(long long)a0;

@end
