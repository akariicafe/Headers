@interface TRIRemoteAssetExtractor : NSObject <TRIAssetExtracting>

- (BOOL)extractArchiveFromFile:(id)a0 withArchiveName:(id)a1 toEmptyDirectory:(id)a2 postExtractionCompression:(struct { unsigned long long x0; })a3 error:(id *)a4;

@end
