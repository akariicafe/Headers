@interface TRIRemoteAssetPatcher : NSObject <TRIAssetPatching>

- (BOOL)applyPatchWithFilename:(id)a0 toSrcDir:(id)a1 writingToEmptyDestDir:(id)a2 postPatchCompression:(struct { unsigned long long x0; })a3 error:(id *)a4;
- (id)_tokenForSandboxExtensionWithClass:(const char *)a0 path:(id)a1;

@end
