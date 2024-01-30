@interface ATXAssets2 : NSObject

+ (void)addOverridePath:(id)a0 forResource:(id)a1 ofType:(id)a2;
+ (id)pathForResource:(id)a0 ofType:(id)a1;
+ (id)asset;
+ (id)dictionaryForResource:(id)a0 ofType:(id)a1 specifiedABGroup:(id)a2;
+ (id)rawDictionaryForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryForClass:(Class)a0;
+ (void)onUpdateRestartThisProcess;
+ (void)updateMobileAssetMetadata;
+ (void)clearOverrides;

@end
