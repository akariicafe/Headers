@interface _SFAutomaticTabClosingUtilities : NSObject

@property (class, readonly, nonatomic) BOOL shouldCloseTabsAutomaticallyWhenEnteringForeground;

+ (void)setAutomaticTabClosingInterval:(unsigned long long)a0;
+ (double)timeIntervalForAutomaticTabClosingInterval:(unsigned long long)a0;
+ (BOOL)userHasPreferenceForAutomaticTabClosingInterval;
+ (id)promptTitleForAutomaticTabClosingInterval:(unsigned long long)a0;
+ (id)settingsTitleForAutomaticTabClosingInterval:(unsigned long long)a0;
+ (void)clearMostDistantLastViewedTime;
+ (void)setMostDistantLastViewedTime:(double)a0;
+ (id)analyticsTitleForAutomaticTabClosingInterval:(unsigned long long)a0;
+ (void)resetAutomaticTabClosingIntervalPreference;
+ (unsigned long long)automaticTabClosingInterval;

@end
