@interface ATXAssets2 : NSObject

+ (void)clearOverrides;
+ (id)pathForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryForResource:(id)a0 ofType:(id)a1 specifiedABGroup:(id)a2;
+ (void)addOverridePath:(id)a0 forResource:(id)a1 ofType:(id)a2;
+ (id)rawDictionaryUsingMobileAssetsForResource:(id)a0 ofType:(id)a1;
+ (id)rawDictionaryForResource:(id)a0 ofType:(id)a1;
+ (id)rawDictionaryUsingTrialForResource:(id)a0 ofType:(id)a1;
+ (id)dictionaryForClass:(Class)a0;
+ (void)onUpdateRestartThisProcess;
+ (id)asset;
+ (void)updateMobileAssetMetadata;

@end
