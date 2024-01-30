@class NSString;

@interface CSLockScreenTestPluginSettings : PTSettings

@property BOOL enablePlugin;
@property BOOL enableLostModePlugin;
@property long long presentationStyle;
@property long long backgroundStyle;
@property long long notificationBehavior;
@property BOOL restrictSiri;
@property BOOL restrictCamera;
@property BOOL restrictUnlock;
@property BOOL restrictLogout;
@property BOOL restrictTouchID;
@property BOOL restrictMediaControls;
@property BOOL restrictTodayCenter;
@property BOOL restrictControlCenter;
@property BOOL hideStatusBar;
@property BOOL hideTimeAndDate;
@property BOOL hideSubtitle;
@property (retain) NSString *subtitleValue;
@property BOOL disableOnUnlock;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
