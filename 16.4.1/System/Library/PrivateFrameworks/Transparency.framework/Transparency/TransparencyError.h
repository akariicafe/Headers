@interface TransparencyError : NSError

+ (id)errorWithDomain:(id)a0 code:(long long)a1 errorLevel:(unsigned long long)a2 underlyingError:(id)a3 userinfo:(id)a4 description:(id)a5 arguments:(char *)a6;
+ (BOOL)hasUnknownSPKIHashError:(id)a0;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 errorLevel:(unsigned long long)a2 underlyingError:(id)a3 userinfo:(id)a4 description:(id)a5;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 underlyingError:(id)a2 description:(id)a3;
+ (id)errorWithError:(id)a0 underlyingError:(id)a1;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 description:(id)a2;
+ (id)truncateUnderlyingErrorDepth:(id)a0 maxDepth:(unsigned long long)a1;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 errorLevel:(unsigned long long)a2 underlyingError:(id)a3 description:(id)a4 arguments:(char *)a5;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 errorLevel:(unsigned long long)a2 underlyingError:(id)a3 description:(id)a4;

@end
