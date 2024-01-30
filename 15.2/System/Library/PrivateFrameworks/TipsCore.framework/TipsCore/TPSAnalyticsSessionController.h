@interface TPSAnalyticsSessionController : NSObject

+ (void)endSession;
+ (void)_resetSession;
+ (void)_logSessionData;
+ (void)_incrementSessionViewNumberForKey:(id)a0;
+ (void)trackSession;
+ (void)incrementCollectionsViewedCount;
+ (void)incrementTipsViewedCount;

@end
