@class NSCalendar, NSDictionary, PLSearchIndexSceneTaxonomyProvider, NSLocale;

@interface PLSpotlightTranslatorConfiguration : NSObject

@property (readonly, nonatomic) PLSearchIndexSceneTaxonomyProvider *sceneTaxonomyProvider;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, copy, nonatomic) NSDictionary *seasonSynonymsBySeason;
@property (readonly, copy, nonatomic) NSDictionary *synonymsByIndexCategoryMask;

- (id)initWithSceneTaxonomyProvider:(id)a0 locale:(id)a1 calendar:(id)a2 seasonSynonyms:(id)a3 synonymsByIndexCategoryMask:(id)a4;
- (id)description;
- (void).cxx_destruct;

@end
