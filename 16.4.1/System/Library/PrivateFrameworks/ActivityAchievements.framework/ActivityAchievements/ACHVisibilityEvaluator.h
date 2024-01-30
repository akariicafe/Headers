@class NSString, NSCalendar, NSDate, NSNumber;

@interface ACHVisibilityEvaluator : NSObject

@property (retain, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) NSDate *injectedNow;
@property (retain, nonatomic) NSString *injectedWatchCountryCode;
@property (retain, nonatomic) NSNumber *injectedIsStandalonePhoneFitnessMode;

- (id)init;
- (void).cxx_destruct;
- (void)_injectIsStandalonePhoneFitnessMode:(BOOL)a0;
- (void)_injectNow:(id)a0;
- (void)_injectWatchCountryCode:(id)a0;
- (BOOL)unearnedAchievementIsVisibleNow:(id)a0;
- (BOOL)unearnedAchievementIsVisibleNow:(id)a0 activityMoveMode:(long long)a1;
- (BOOL)unearnedAchievementIsVisibleNow:(id)a0 activityMoveMode:(long long)a1 experienceType:(unsigned long long)a2;

@end
