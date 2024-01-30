@class NSCalendar, PLSearchIndexSceneTaxonomy, NSDictionary, NSLocale;

@interface PLSpotlightAssetTranslatorConfiguration : NSObject

@property (readonly, nonatomic) PLSearchIndexSceneTaxonomy *sceneTaxonomy;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, copy, nonatomic) NSDictionary *seasonSynonymsBySeason;
@property (readonly, copy, nonatomic) NSDictionary *synonymsByIndexCategoryMask;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSceneTaxonomy:(id)a0 locale:(id)a1 calendar:(id)a2 seasonSynonyms:(id)a3 synonymsByIndexCategoryMask:(id)a4;

@end
