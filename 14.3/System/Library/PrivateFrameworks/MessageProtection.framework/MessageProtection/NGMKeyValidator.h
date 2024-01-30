@interface NGMKeyValidator : NSObject

+ (id)keyValidatorWithReceiversIdentity:(id)a0 sendersIdentity:(id)a1;
+ (BOOL)isValidKeyValidator:(id)a0 receiversIdentity:(id)a1 sendersIdentity:(id)a2 error:(id *)a3;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOnPublicKey;
+ (id)versionByte;
+ (unsigned long long)validatorLength;

@end
