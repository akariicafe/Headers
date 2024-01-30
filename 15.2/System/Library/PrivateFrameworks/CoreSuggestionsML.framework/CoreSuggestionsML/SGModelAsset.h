@interface SGModelAsset : NSObject

+ (void)_reset;
+ (id)metricsConfig;
+ (void)registerOnUpdateBlock:(id /* block */)a0;
+ (id)asset;
+ (id)quickResponses;
+ (id)dpRecorderRules;
+ (id)nameDetectorRules;
+ (void)_invokeOnUpdateBlock;
+ (id)signatureRules;
+ (id)_assetWithName:(id)a0 andLoadBlock:(id /* block */)a1;
+ (id)dictionaryWithPlistFilename:(id)a0;
+ (id)mappings;
+ (id)rules;

@end
