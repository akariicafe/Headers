@class NSMutableDictionary;

@interface CDMAssetConfig : NSObject {
    NSMutableDictionary *_assetConfigs;
}

- (id)init;
- (void).cxx_destruct;
- (void)addAssetConfigItem:(id)a0 forKey:(id)a1;
- (id)getAssetConfigItemForKey:(id)a0;
- (id)getAssetConfigItems;
- (BOOL)hasAssetConfigItems;

@end
