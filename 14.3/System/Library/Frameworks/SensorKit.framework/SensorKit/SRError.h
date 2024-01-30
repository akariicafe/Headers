@interface SRError : NSObject

+ (id)authorizationError;
+ (id)invalidInfoPlistErrorWithMissingKey:(id)a0;
+ (id)authorizationErrorWithStatus:(long long)a0;
+ (id)invalidEntitlementError;
+ (id)errorWithCode:(long long)a0 description:(id)a1 recoverySuggestion:(id)a2;
+ (id)errorWithCode:(long long)a0 description:(id)a1 recoverySuggestion:(id)a2 underlyingError:(id)a3;
+ (id)connectionNotFoundError;
+ (id)errorWithCode:(long long)a0;

@end
