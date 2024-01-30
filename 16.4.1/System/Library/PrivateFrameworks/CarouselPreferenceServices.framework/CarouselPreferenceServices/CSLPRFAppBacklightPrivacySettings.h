@class NSString;
@protocol CSLPRFApplication, CSLPRFPerApplicationSettingsDelegate;

@interface CSLPRFAppBacklightPrivacySettings : NSObject <CSLPRFPerApplicationSettings, CSLPRFAppBacklightPrivacyProperties> {
    id<CSLPRFPerApplicationSettingsDelegate> _delegate;
    BOOL _lock_privacyDuringAlwaysOnForApp;
    BOOL _lock_privacyDuringAlwaysOnForNotification;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) unsigned long long category;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) id<CSLPRFApplication> application;
@property (readonly, nonatomic) BOOL isGlobalDefault;
@property (readonly, nonatomic) BOOL hasCustomSetting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL watchAppSupportsAlwaysOnDisplay;
@property (readonly, nonatomic) BOOL privacyDuringAlwaysOnForApp;
@property (readonly, nonatomic) BOOL privacyDuringAlwaysOnForNotification;

+ (const char *)notificationName;
+ (unsigned long long)categoryForApplication:(id)a0;
+ (id)globalDefaultIdentifer;
+ (id)globalSettingsWithSerialization:(id)a0 delegate:(id)a1;
+ (Class)serializationClass;
+ (id)settingsForApplication:(id)a0 withSerialization:(id)a1 delegate:(id)a2;
+ (id)settingsKey;
+ (id)sharedSettingsModel;

- (BOOL)isEqual:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (void)updateSettingsWithBlock:(id /* block */)a0;
- (id)initForApplication:(id)a0 isGlobalDefault:(BOOL)a1 withSerialization:(id)a2 delegate:(id)a3;
- (BOOL)isEqualToSettings:(id)a0;
- (id)privacyDuringAlwaysOnForAppWithIgnoredSpecifier:(id)a0;
- (id)privacyDuringAlwaysOnForNotificationWithIgnoredSpecifier:(id)a0;
- (id)resolvedSettingWithGlobalSettings:(id)a0;
- (void)setPrivacyDuringAlwaysOnForApp:(id)a0 withIgnoredSpecifier:(id)a1;
- (void)setPrivacyDuringAlwaysOnForNotification:(id)a0 withIgnoredSpecifier:(id)a1;

@end
