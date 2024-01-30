@interface InpaintingGeneralHelpers : NSObject

+ (id)errorWithCode:(long long)a0 message:(id)a1 underlyingError:(id)a2;
+ (id)URLForResource:(id)a0 ofType:(id)a1 error:(id *)a2;
+ (BOOL)fillError:(id *)a0 withErrorWithCode:(long long)a1 message:(id)a2 underlyingError:(id)a3;
+ (BOOL)fillError:(id *)a0 withGeneralErrorWithMessage:(id)a1;
+ (id)generalErrorWithMessage:(id)a0;
+ (id)getMainBundleUsingError:(id *)a0;
+ (id)pathForResource:(id)a0 ofType:(id)a1 error:(id *)a2;
+ (id)pathForResourceWithFilename:(id)a0 error:(id *)a1;
+ (id)stringFromCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
