@interface TPSAnalyticsSessionController : NSObject

+ (void)endSession;
+ (void)_resetSession;
+ (void)_logSessionData;
+ (void)incrementCollectionsViewedCount;
+ (void)_incrementSessionViewNumberForKey:(id)a0;
+ (void)incrementTipsViewedCount;
+ (void)trackSession;

@end
