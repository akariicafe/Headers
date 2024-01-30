@interface DKSandboxExtension : NSObject

+ (id)consumeSandboxExtensionWithToken:(id)a0 error:(id *)a1;
+ (id)consumeSandboxExtensionsWithTokens:(id)a0;
+ (id)issueSandboxExtensionForFile:(id)a0 toAuditToken:(struct { unsigned int x0[8]; })a1 error:(id *)a2;
+ (id)issueSandboxExtensionsForFiles:(id)a0 toAuditToken:(struct { unsigned int x0[8]; })a1;
+ (BOOL)releaseSandboxExtensionWithHandle:(id)a0 error:(id *)a1;
+ (void)releaseSandboxExtensionsWithHandles:(id)a0;

@end
