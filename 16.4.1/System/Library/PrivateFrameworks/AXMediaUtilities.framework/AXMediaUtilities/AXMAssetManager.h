@interface AXMAssetManager : NSObject

+ (id)defaultManager;

- (id)_compiledModelsDirectoryForType:(unsigned long long)a0;
- (id)_modelAssetNamesOfType:(unsigned long long)a0 sources:(unsigned long long)a1 compiled:(BOOL)a2;
- (id)_modelAssetURLForModelNamed:(id)a0 ofType:(unsigned long long)a1 sources:(unsigned long long)a2 compiled:(BOOL)a3;
- (id)_modelAssetURLsOfType:(unsigned long long)a0 sources:(unsigned long long)a1 compiled:(BOOL)a2;
- (id)_modelsDirectoryForType:(unsigned long long)a0 compiled:(BOOL)a1;
- (id)_photoCaptionAssetsDirectory;
- (id)_uncompiledModelsDirectoryForType:(unsigned long long)a0;
- (id)compiledModelAssetNamesOfType:(unsigned long long)a0 sources:(unsigned long long)a1;
- (id)compiledModelAssetURLForModelNamed:(id)a0 ofType:(unsigned long long)a1 sources:(unsigned long long)a2;
- (id)compiledModelAssetURLsOfType:(unsigned long long)a0 sources:(unsigned long long)a1;
- (id)modelWithName:(id)a0 ofType:(unsigned long long)a1 sources:(unsigned long long)a2 compileIfNeeded:(BOOL)a3 persistCompiledModel:(BOOL)a4 error:(id *)a5;
- (id)uncompiledModelAssetNamesOfType:(unsigned long long)a0 sources:(unsigned long long)a1;
- (id)uncompiledModelAssetURLForModelNamed:(id)a0 ofType:(unsigned long long)a1 sources:(unsigned long long)a2;
- (id)uncompiledModelAssetURLsOfType:(unsigned long long)a0 sources:(unsigned long long)a1;

@end
