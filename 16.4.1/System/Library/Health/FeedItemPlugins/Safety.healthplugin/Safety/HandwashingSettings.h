@class BRKRemindersSettingsHelper, NSString, NSUserDefaults, NSNumber, BRKSettings;
@protocol HandwashingSettingsDelegate;

@interface HandwashingSettings : NSObject <BRKRemindersSettingsDelegate> {
    BRKSettings *_settings;
    BRKRemindersSettingsHelper *_remindersHelper;
    NSUserDefaults *_userDefaults;
}

@property (weak, nonatomic) id<HandwashingSettingsDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *viewControllerTitle;
@property (readonly, nonatomic) BOOL isAvailable;
@property (retain, nonatomic) NSNumber *isAvailableOverride;
@property (nonatomic) BOOL isOnboardingComplete;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL areRemindersEnabled;
@property (readonly, nonatomic) BOOL areRemindersAvailable;
@property (readonly, nonatomic) BOOL isMeCardAvailable;
@property (readonly, nonatomic) BOOL isLocationAvailable;
@property (readonly, nonatomic) BOOL isLocationAuthorizationValid;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remindersSettingTitle;
+ (id)timerSettingFooter;
+ (id)timerSettingTitle;

- (id)init;
- (void).cxx_destruct;
- (id)remindersFooterTextAndLinkString;
- (void)remindersSettingsDidUpdate:(id)a0;
- (void)requestLocationAuthorizationIfNeeded;
- (void)reloadRemindersSettingsData;

@end
