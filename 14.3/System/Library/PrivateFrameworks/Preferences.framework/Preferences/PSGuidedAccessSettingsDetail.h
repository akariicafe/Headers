@class NSString;

@interface PSGuidedAccessSettingsDetail : NSObject <PSSettingsDetail>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)guidedAccessHasPasscode;
+ (void)setGuidedAccessSwitchEnabled:(BOOL)a0;
+ (void)enterGuidedAccessMode;
+ (id)iconImage;
+ (id)preferencesURL;
+ (unsigned long long)guidedAccessAvailability;


@end
