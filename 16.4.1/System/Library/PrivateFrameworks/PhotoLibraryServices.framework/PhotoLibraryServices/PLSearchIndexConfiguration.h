@class NSCalendar, PLSearchIndexSceneTaxonomyProvider, NSLocale, PLSpotlightTranslatorConfiguration;

@interface PLSearchIndexConfiguration : NSObject

@property (class, readonly, nonatomic) NSLocale *locale;
@property (class, readonly, nonatomic) NSCalendar *calendar;
@property (class, readonly, nonatomic) unsigned long long featureFlags;

@property (retain, nonatomic) PLSpotlightTranslatorConfiguration *translatorConfiguration;
@property (retain, nonatomic) PLSearchIndexSceneTaxonomyProvider *sceneTaxonomyProvider;

- (void).cxx_destruct;

@end
