@class NSString, NSMutableArray;

@interface BYLocaleDataSource : NSObject

@property (retain, nonatomic) NSMutableArray *suggestedCountries;
@property (retain, nonatomic) NSMutableArray *moreCountries;
@property (nonatomic) BOOL hasRecommendedLocaleFromLanguage;
@property (copy, nonatomic) NSString *language;

+ (id)newWithLanguage:(id)a0;

- (void)reloadData;
- (void).cxx_destruct;
- (unsigned long long)numberOfRecommendedLocales;
- (unsigned long long)numberOfOtherLocales;
- (id)recommendedLocaleAtIndex:(unsigned long long)a0;
- (id)otherLocaleAtIndex:(unsigned long long)a0;

@end
