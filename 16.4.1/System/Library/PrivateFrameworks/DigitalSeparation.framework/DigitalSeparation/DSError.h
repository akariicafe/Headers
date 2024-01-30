@interface DSError : NSObject

+ (id)errorWithCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 underlyingErrors:(id)a1;
+ (id)errorWithCode:(long long)a0 appName:(id)a1;
+ (id)errorWithCode:(long long)a0 appName:(id)a1 serviceName:(id)a2 underlyingErrors:(id)a3;
+ (id)errorWithCode:(long long)a0 serviceName:(id)a1;
+ (id)errorWithCode:(long long)a0 sourceName:(id)a1;
+ (id)errorWithCode:(long long)a0 sourceName:(id)a1 underlyingErrors:(id)a2;

@end
