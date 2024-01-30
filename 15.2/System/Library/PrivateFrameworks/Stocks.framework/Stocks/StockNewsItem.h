@class NSString, NSURL, NSDate;

@interface StockNewsItem : NSObject {
    NSString *_localizedDateString;
}

@property (retain, nonatomic) NSString *headline;
@property (retain, nonatomic) NSString *summary;
@property (retain, nonatomic) NSString *source;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSURL *link;
@property (readonly, retain, nonatomic) NSString *localizedDateString;

+ (id)localizedStringForDate:(id)a0;

- (id)initWithArchiveDictionary:(id)a0;
- (id)description;
- (void)resetLocale;
- (void).cxx_destruct;
- (id)archiveDictionary;
- (long long)chronologicalComparisonWithNewsItem:(id)a0;

@end
