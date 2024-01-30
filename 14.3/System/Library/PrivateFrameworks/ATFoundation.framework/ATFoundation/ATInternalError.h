@interface ATInternalError : NSObject

+ (id)errorWithCode:(unsigned long long)a0 underlyingError:(id)a1;
+ (id)errorWithCode:(unsigned long long)a0 format:(id)a1;
+ (id)errorWithPosixError:(int)a0 format:(id)a1;

@end
