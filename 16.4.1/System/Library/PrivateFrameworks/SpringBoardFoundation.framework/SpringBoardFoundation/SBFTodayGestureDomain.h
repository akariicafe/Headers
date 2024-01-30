@class SBFTodayGestureSettings;

@interface SBFTodayGestureDomain : PTDomain

@property (class, readonly, nonatomic) SBFTodayGestureSettings *rootSettings;

+ (Class)rootSettingsClass;
+ (id)domainName;
+ (id)domainGroupName;

@end
