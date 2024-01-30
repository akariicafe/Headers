@interface BYAnalyticsEventRecommendedLocale : NSObject

@property (nonatomic) unsigned long long source;
@property (nonatomic) double durationOfWiFiScan;
@property (nonatomic) BOOL userVisitedLocalePane;
@property (nonatomic) BOOL userSawRecommendedLocale;

+ (id)sharedInstance;

- (id)init;
- (id)eventPayload;

@end
