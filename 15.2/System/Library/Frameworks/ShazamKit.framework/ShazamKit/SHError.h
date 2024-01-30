@interface SHError : NSObject

+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1;
+ (id)errorWithCode:(long long)a0 underlyingError:(id)a1 keyOverrides:(id)a2;
+ (id)messageForCode:(long long)a0;
+ (BOOL)annotateClientError:(id *)a0 code:(long long)a1 underlyingError:(id)a2;
+ (BOOL)annotateClientError:(id *)a0 code:(long long)a1 underlyingError:(id)a2 keyOverrides:(id)a3;
+ (id)remapErrorToClientError:(id)a0;
+ (id)internalErrorWithCode:(long long)a0 underlyingError:(id)a1;
+ (BOOL)annotateClientError:(id *)a0 withError:(id)a1;
+ (BOOL)remapErrorToClientErrorPointer:(id *)a0;

@end
