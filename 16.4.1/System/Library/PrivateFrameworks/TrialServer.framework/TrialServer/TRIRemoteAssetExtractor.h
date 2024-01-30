@class NSObject;
@protocol OS_xpc_object;

@interface TRIRemoteAssetExtractor : NSObject <TRIAssetExtracting> {
    NSObject<OS_xpc_object> *_monitoredActivity;
}

- (struct { unsigned char x0; })extractArchiveFromFile:(id)a0 withArchiveName:(id)a1 toEmptyDirectory:(id)a2 postExtractionCompression:(struct { unsigned long long x0; })a3 error:(id *)a4;
- (id)initWithMonitoredActivity:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
