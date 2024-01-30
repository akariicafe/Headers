@interface SigCrop : NSObject

+ (BOOL)ConvertException:(const struct exception { void /* function */ **x0; } *)a0 toError:(id *)a1;
+ (BOOL)FillUnknownError:(id *)a0;
+ (BOOL)ConvertSystemError:(const struct system_error { void /* function */ **x0; struct __libcpp_refstring { char *x0; } x1; struct error_code { int x0; struct error_category *x1; } x2; } *)a0 toError:(id *)a1;
+ (id)cropSignature:(id)a0 atPosition:(double)a1 withLength:(double)a2 error:(id *)a3;
+ (double)getSampleLength:(id)a0 error:(id *)a1;

@end
