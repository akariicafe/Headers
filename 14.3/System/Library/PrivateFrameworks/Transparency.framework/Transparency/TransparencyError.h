@interface TransparencyError : NSError

+ (id)errorWithDomain:(id)a0 code:(long long)a1 description:(id)a2;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 underlyingError:(id)a2 description:(id)a3;
+ (BOOL)hasUnknownSPKIHashError:(id *)a0;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 errorLevel:(unsigned long long)a2 underlyingError:(id)a3 description:(id)a4 arguments:(char *)a5;
+ (id)errorWithError:(id)a0 underlyingError:(id)a1;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 errorLevel:(unsigned long long)a2 underlyingError:(id)a3 description:(id)a4;

@end
