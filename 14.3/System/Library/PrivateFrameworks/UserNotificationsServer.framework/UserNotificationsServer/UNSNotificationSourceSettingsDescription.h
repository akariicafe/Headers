@interface UNSNotificationSourceSettingsDescription : NSObject

@property (nonatomic) BOOL supportsSounds;
@property (nonatomic) BOOL supportsAlerts;
@property (nonatomic) BOOL supportsBadges;
@property (nonatomic) BOOL supportsLockScreen;
@property (nonatomic) BOOL supportsNotificationCenter;
@property (nonatomic) BOOL supportsCarPlay;
@property (nonatomic) BOOL supportsSpoken;
@property (nonatomic) BOOL modalAlertStyle;
@property (nonatomic) BOOL alwaysShowPreviews;
@property (nonatomic) BOOL providesAppNotificationSettings;

+ (id)notificationSourceSettingsDescriptionFromDictionary:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
