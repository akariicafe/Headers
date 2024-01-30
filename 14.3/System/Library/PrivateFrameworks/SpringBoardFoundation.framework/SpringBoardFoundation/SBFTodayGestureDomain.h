@class SBFTodayGestureSettings;

@interface SBFTodayGestureDomain : PTDomain

@property (class, readonly, nonatomic) SBFTodayGestureSettings *rootSettings;

+ (id)domainName;
+ (id)domainGroupName;
+ (Class)rootSettingsClass;

@end
