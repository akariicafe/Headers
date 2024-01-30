@interface EMFIndexLoader : NSObject

+ (void)_inferAndApplyStrategyToIndex:(id)a0;
+ (id)_invertedIndexWithTermIndexURL:(id)a0 andDocumentIndexURL:(id)a1 fromBundle:(id)a2;
+ (id)_loadDictionaryResource:(id)a0;
+ (id)defaultIndexForBundle:(id)a0;
+ (id)stemmedIndexForBundle:(id)a0;

@end
