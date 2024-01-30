@class NSSet, NSLocale;

@interface PGTimeTitleOptions : NSObject

@property (retain, nonatomic) NSSet *momentNodes;
@property (retain, nonatomic) NSSet *locationNodes;
@property (nonatomic) unsigned long long allowedFormats;
@property (nonatomic) BOOL filterDates;
@property (retain, nonatomic) NSLocale *locale;

- (id)init;
- (void).cxx_destruct;

@end
