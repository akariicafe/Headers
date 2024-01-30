@class RTDefaultsManager;

@interface RTAssetProcessor : NSObject

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;

- (BOOL)_deviceSeed:(id)a0 belongsToGroupId:(id)a1 seedId:(id)a2 modValue:(id)a3 low:(id)a4 high:(id)a5;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDefaultsManager:(id)a0;
- (id)_objectForKey:(id)a0 expectedClass:(Class)a1 inDictionary:(id)a2;
- (BOOL)processAssetsAtPath:(id)a0 intoPath:(id)a1 outError:(id *)a2;

@end
