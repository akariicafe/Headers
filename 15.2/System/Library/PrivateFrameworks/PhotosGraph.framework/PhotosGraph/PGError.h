@interface PGError : NSObject

+ (id)errorWithCode:(long long)a0 description:(id)a1;
+ (id)errorForCode:(long long)a0;
+ (id)xpcSafeErrorWithError:(id)a0;

@end
