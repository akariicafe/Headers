@interface SAError : NSObject

+ (id)errorWithCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 description:(id)a1 recoverySuggestion:(id)a2;
+ (id)errorWithCode:(long long)a0 description:(id)a1 recoverySuggestion:(id)a2 underlyingError:(id)a3;

@end
