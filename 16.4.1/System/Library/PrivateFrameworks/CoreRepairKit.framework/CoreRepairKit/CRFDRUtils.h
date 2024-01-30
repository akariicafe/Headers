@interface CRFDRUtils : NSObject

+ (id)getDiagnosticReport;
+ (id)getLocalSealingManifest;
+ (id)getStringFromCert:(struct { char *x0; char *x1; })a0 WithTag:(unsigned long long)a1 AndOID:(id)a2;

@end
