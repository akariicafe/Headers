@interface APFPDIWrapper : NSObject

+ (int)FPDIDestroyAllContext;
+ (int)FPDIDestroyAttribute:(void **)a0;
+ (int)FPDIDestroyData:(void **)a0;
+ (int)FPDIInitContext:(void *)a0 withInitResponse:(void *)a1 initResponseLength:(unsigned int)a2 setupRequest:(void **)a3 setupRequestLength:(unsigned int *)a4;
+ (int)FPDISetStashingIsEnabled:(BOOL)a0 forAttribute:(void *)a1;
+ (int)FPDISignWithContext:(void *)a0 message:(char *)a1 messageLength:(unsigned int)a2 rawSignature:(void **)a3 rawSignatureLength:(unsigned int *)a4;
+ (int)FPDICreateContext:(void **)a0 withAttribute:(void *)a1 initRequest:(void **)a2 initRequestLength:(unsigned int *)a3;
+ (int)FPDIDestroyAllNonStashedContexts;
+ (int)FPDIDestroyContext:(void **)a0;
+ (int)FPDIInitAttribute:(void **)a0;
+ (int)FPDISetHighPrivacyLevelForAttribute:(void *)a0;
+ (int)FPDISetupContext:(void *)a0 withSetupResponse:(void *)a1 setupResponseLength:(unsigned int)a2;

@end
