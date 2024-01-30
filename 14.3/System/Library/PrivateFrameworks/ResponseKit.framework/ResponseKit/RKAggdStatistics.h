@interface RKAggdStatistics : NSObject

+ (void)incrementAggdKeyForCategory:(id)a0 forAction:(id)a1 withLanguageID:(id)a2;
+ (void)decrementAggdKeyForCategory:(id)a0 forAction:(id)a1 withLanguageID:(id)a2;
+ (void)clearScalarValuesForLanguage:(id)a0;

@end
