@interface UMError : NSObject

+ (id)errorWithErrorCode:(unsigned long long)a0;
+ (id)errorWithErrorCode:(unsigned long long)a0 underlyingError:(id)a1;
+ (id)errorWithErrorCode:(unsigned long long)a0 userInfo:(id)a1;

@end
