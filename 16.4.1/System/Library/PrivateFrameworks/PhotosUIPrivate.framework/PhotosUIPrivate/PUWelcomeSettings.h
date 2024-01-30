@class NSString;

@interface PUWelcomeSettings : PXSettings <SBSRemoteAlertHandleObserver>

@property (nonatomic) BOOL alwaysShowWhatsNewWelcome;
@property (nonatomic) BOOL alwaysShowCloudPhotoWelcome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;
- (void)remoteAlertHandleDidDeactivate:(id)a0;

@end
