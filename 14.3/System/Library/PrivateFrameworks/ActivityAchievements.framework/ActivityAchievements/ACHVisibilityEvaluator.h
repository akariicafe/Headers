@class NSString, NSCalendar, NSDate;

@interface ACHVisibilityEvaluator : NSObject

@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSDate *injectedNow;
@property (retain, nonatomic) NSString *injectedWatchCountryCode;

- (id)init;
- (void).cxx_destruct;
- (BOOL)unearnedAchievementIsVisibleNow:(id)a0 activityMoveMode:(long long)a1 experienceType:(unsigned long long)a2;
- (BOOL)unearnedAchievementIsVisibleNow:(id)a0;
- (BOOL)unearnedAchievementIsVisibleNow:(id)a0 activityMoveMode:(long long)a1;
- (void)_injectNow:(id)a0;
- (void)_injectWatchCountryCode:(id)a0;

@end
