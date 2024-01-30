@interface SNError : NSObject

+ (void)populateClientError:(id *)a0 withCode:(long long)a1 underlyingError:(id)a2 message:(id)a3;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 message:(id)a2;

@end
