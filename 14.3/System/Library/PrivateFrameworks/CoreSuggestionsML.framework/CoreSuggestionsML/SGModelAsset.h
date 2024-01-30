@interface SGModelAsset : NSObject

+ (void)_reset;
+ (id)nameDetectorRules;
+ (id)quickResponses;
+ (void)registerOnUpdateBlock:(id /* block */)a0;
+ (void)_invokeOnUpdateBlock;
+ (id)asset;
+ (id)_assetWithName:(id)a0 andLoadBlock:(id /* block */)a1;
+ (id)rules;
+ (id)signatureRules;
+ (id)mappings;
+ (id)metricsConfig;
+ (id)dpRecorderRules;
+ (id)dictionaryWithPlistFilename:(id)a0;

@end
