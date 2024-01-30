@interface CPLResourceIdentityImplementation : CPLResourceIdentity

+ (id)_fingerPrintForFD:(int)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)storageNameForFingerPrint:(id)a0 fileUTI:(id)a1 bucket:(id *)a2;
+ (id)identityForStorageName:(id)a0;
+ (id)fileUTIForExtension:(id)a0;
+ (id)identityFromStoredIdentity:(id)a0;
+ (id)fingerPrintForData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)zeroByteFileFingerPrint;
+ (id)fingerPrintForFileAtURL:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (id)extensionForFileUTI:(id)a0;
+ (BOOL)isValidMMCSV2Signature:(id)a0;
+ (void)setMMCImplementationForPlatform:(id)a0;
+ (id)fingerPrintForFD:(int)a0 typeIdentifier:(id)a1 error:(id *)a2;

- (id)identityForStorage;

@end
