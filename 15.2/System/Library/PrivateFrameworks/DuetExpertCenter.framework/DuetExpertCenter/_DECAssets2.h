@interface _DECAssets2 : NSObject

+ (id)pathForResource:(id)a0 ofType:(id)a1;
+ (id)asset;
+ (void)updateMobileAssetMetadata;
+ (id)dictionaryForResource:(id)a0 ofType:(id)a1 specifiedABGroup:(id)a2;
+ (void)onUpdateRestartThisProcess;
+ (void)addOverridePath:(id)a0 forResource:(id)a1 ofType:(id)a2;
+ (id)rawDictionaryForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryForClass:(Class)a0;
+ (void)clearOverrides;
+ (id)dictionaryForResource:(id)a0 ofType:(id)a1;

@end
