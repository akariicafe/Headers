@interface DIError : NSObject

+ (id)errorWithEnumValue:(long long)a0 errorString:(id)a1;
+ (id)errorWithEnumValue:(long long)a0 errorString:(id)a1 error:(id *)a2;
+ (id)errorWithRetCode:(int)a0 prefix:(id)a1 error:(id *)a2;
+ (BOOL)failWithEnumValue:(long long)a0 errorString:(id)a1 error:(id *)a2;
+ (BOOL)failWithRetCode:(int)a0 prefix:(id)a1 error:(id *)a2;

@end
