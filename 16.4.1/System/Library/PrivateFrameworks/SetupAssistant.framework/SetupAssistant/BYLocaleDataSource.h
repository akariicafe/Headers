@class NSString, NSMutableArray;

@interface BYLocaleDataSource : NSObject

@property (retain, nonatomic) NSMutableArray *suggestedCountries;
@property (retain, nonatomic) NSMutableArray *moreCountries;
@property (nonatomic) BOOL hasRecommendedLocaleFromLanguage;
@property (copy, nonatomic) NSString *language;

+ (id)newWithLanguage:(id)a0;

- (void)reloadData;
- (void).cxx_destruct;
- (unsigned long long)numberOfOtherLocales;
- (unsigned long long)numberOfRecommendedLocales;
- (id)otherLocaleAtIndex:(unsigned long long)a0;
- (id)recommendedLocaleAtIndex:(unsigned long long)a0;

@end
