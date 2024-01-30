@interface PGError : NSObject

+ (id)errorForCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 description:(id)a1;
+ (id)xpcSafeErrorWithError:(id)a0;

@end
