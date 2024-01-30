@interface SGModelAsset : NSObject

+ (void)_reset;
+ (void)registerOnUpdateBlock:(id /* block */)a0;
+ (id)quickResponses;
+ (id)rules;
+ (void)_invokeOnUpdateBlock;
+ (id)mappings;
+ (id)quickResponsesVocab;
+ (id)dpRecorderRules;
+ (id)dictionaryWithPlistFilename:(id)a0;
+ (id)asset;
+ (id)metricsConfig;
+ (id)signatureRules;
+ (id)nameDetectorRules;
+ (id)_assetWithName:(id)a0 andLoadBlock:(id /* block */)a1;
+ (id)vocabWithTrieFilename:(id)a0;

@end
