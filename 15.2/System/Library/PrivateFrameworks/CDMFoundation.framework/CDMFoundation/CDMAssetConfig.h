@class NSMutableDictionary;

@interface CDMAssetConfig : NSObject {
    NSMutableDictionary *_assetConfigs;
}

@property (readonly, nonatomic) BOOL isAssetBacked;

- (void).cxx_destruct;
- (id)init;
- (id)getAssetConfigItems;
- (id)getAssetConfigItemForKey:(id)a0;
- (id)initWithAssetRequired:(BOOL)a0;
- (void)addAssetConfigItem:(id)a0 forKey:(id)a1;

@end
