@class NSMutableDictionary;

@interface ANAnalyticsDailyAnnouncements : NSObject

@property (nonatomic) double lastAccess;
@property (retain, nonatomic) NSMutableDictionary *homes;

- (void)merge:(id)a0;
- (BOOL)shouldReport;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)dictionary;
- (unsigned long long)announcementsCount;
- (id)initWithLastAccess:(double)a0;
- (unsigned long long)homesCount;
- (void)incrementCountInHome:(id)a0 group:(id)a1;

@end
