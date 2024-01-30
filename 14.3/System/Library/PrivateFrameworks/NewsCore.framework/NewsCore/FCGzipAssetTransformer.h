@interface FCGzipAssetTransformer : FCAssetTransformer

- (BOOL)_transformAssetDataFromInputStream:(id)a0 toOutputStream:(id)a1 error:(id *)a2;
- (BOOL)transformAssetDataFromFilePath:(id)a0 toFilePath:(id)a1 error:(id *)a2;

@end
