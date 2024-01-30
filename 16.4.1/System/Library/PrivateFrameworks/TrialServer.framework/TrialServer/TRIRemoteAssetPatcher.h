@class NSObject;
@protocol OS_xpc_object;

@interface TRIRemoteAssetPatcher : NSObject <TRIAssetPatching> {
    NSObject<OS_xpc_object> *_monitoredActivity;
}

- (struct { unsigned char x0; })applyPatchWithFilename:(id)a0 toSrcDir:(id)a1 writingToEmptyDestDir:(id)a2 postPatchCompression:(struct { unsigned long long x0; })a3 error:(id *)a4;
- (id)_tokenForSandboxExtensionWithClass:(const char *)a0 path:(id)a1;
- (id)initWithMonitoredActivity:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
