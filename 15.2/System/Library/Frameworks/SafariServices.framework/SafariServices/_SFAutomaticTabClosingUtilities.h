@interface _SFAutomaticTabClosingUtilities : NSObject

@property (class, readonly, nonatomic) BOOL shouldCloseTabsAutomaticallyWhenEnteringForeground;

+ (void)setAutomaticTabClosingInterval:(unsigned long long)a0;
+ (unsigned long long)automaticTabClosingInterval;
+ (void)setMostDistantLastViewedTime:(double)a0;
+ (id)promptTitleForAutomaticTabClosingInterval:(unsigned long long)a0;
+ (id)analyticsTitleForAutomaticTabClosingInterval:(unsigned long long)a0;
+ (void)resetAutomaticTabClosingIntervalPreference;
+ (id)settingsTitleForAutomaticTabClosingInterval:(unsigned long long)a0;
+ (void)clearMostDistantLastViewedTime;
+ (BOOL)userHasPreferenceForAutomaticTabClosingInterval;
+ (double)timeIntervalForAutomaticTabClosingInterval:(unsigned long long)a0;

@end
