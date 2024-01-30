@class NSBundle;

@interface DIError : NSObject

@property (class, readonly) NSBundle *frameworkBundle;

+ (id)errorWithPOSIXCode:(int)a0 verboseInfo:(id)a1;
+ (BOOL)mandatoryArgumentFailWithError:(id *)a0;
+ (id)errorWithEnumValue:(long long)a0 verboseInfo:(id)a1;
+ (id)copyDefaultLocalizedStringForDIErrorCode:(long long)a0;
+ (id)errorWithDIException:(const void *)a0 description:(id)a1 prefix:(id)a2 error:(id *)a3;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 description:(id)a2 verboseInfo:(id)a3 error:(id *)a4;
+ (BOOL)failWithDIException:(const void *)a0 description:(id)a1 error:(id *)a2;
+ (BOOL)failWithDIException:(const void *)a0 prefix:(id)a1 error:(id *)a2;
+ (BOOL)failWithEnumValue:(long long)a0 description:(id)a1 error:(id *)a2;
+ (BOOL)failWithEnumValue:(long long)a0 verboseInfo:(id)a1 error:(id *)a2;
+ (BOOL)failWithOSStatus:(int)a0 description:(id)a1 error:(id *)a2;
+ (BOOL)failWithOSStatus:(int)a0 verboseInfo:(id)a1 error:(id *)a2;
+ (BOOL)failWithPOSIXCode:(int)a0 description:(id)a1 error:(id *)a2;
+ (BOOL)failWithPOSIXCode:(int)a0 error:(id *)a1;
+ (BOOL)failWithPOSIXCode:(int)a0 verboseInfo:(id)a1 error:(id *)a2;
+ (id)nilWithDIException:(const void *)a0 description:(id)a1 error:(id *)a2;
+ (id)nilWithDIException:(const void *)a0 prefix:(id)a1 error:(id *)a2;
+ (id)nilWithEnumValue:(long long)a0 description:(id)a1 error:(id *)a2;
+ (id)nilWithEnumValue:(long long)a0 verboseInfo:(id)a1 error:(id *)a2;
+ (id)nilWithOSStatus:(int)a0 verboseInfo:(id)a1 error:(id *)a2;
+ (id)nilWithPOSIXCode:(int)a0 description:(id)a1 error:(id *)a2;
+ (id)nilWithPOSIXCode:(int)a0 verboseInfo:(id)a1 error:(id *)a2;

@end
