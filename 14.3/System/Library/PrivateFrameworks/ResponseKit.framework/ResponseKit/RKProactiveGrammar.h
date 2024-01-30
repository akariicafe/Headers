@interface RKProactiveGrammar : NSObject

+ (id)sharedManager;
+ (id)getOTAPathForRKBundle:(id)a0;
+ (id)getEntities:(id)a0;

- (id)init;
- (void)dealloc;
- (id)copyAttributedTokenForText:(id)a0 forLanguage:(id)a1;
- (void *)getLanguageModel:(id)a0;
- (id)getEquivalenceClass:(id)a0;
- (id)copyAttributedTokenForText:(id)a0 forLanguageModel:(void *)a1 withLanguageCode:(id)a2;
- (void *)chineseTokenizer;

@end
