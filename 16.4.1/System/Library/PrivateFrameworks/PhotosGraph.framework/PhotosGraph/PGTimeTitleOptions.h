@class NSSet, NSLocale, PGGraphYearNodeCollection;

@interface PGTimeTitleOptions : NSObject

@property (retain, nonatomic) NSSet *momentNodes;
@property (retain, nonatomic) PGGraphYearNodeCollection *featuredYearNodes;
@property (retain, nonatomic) NSSet *locationNodes;
@property (nonatomic) unsigned long long allowedFormats;
@property (nonatomic) BOOL filterDates;
@property (nonatomic) BOOL usePeopleSubtitleFormatWithYears;
@property (nonatomic) BOOL filterForSignificantDateNodes;
@property (retain, nonatomic) NSLocale *locale;

- (id)init;
- (void).cxx_destruct;

@end
