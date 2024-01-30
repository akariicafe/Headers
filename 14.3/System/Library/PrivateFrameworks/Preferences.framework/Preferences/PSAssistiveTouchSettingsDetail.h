@class NSString;

@interface PSAssistiveTouchSettingsDetail : NSObject <PSSettingsBoolDetail>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconImage;
+ (id)preferencesURL;
+ (void)setEnabled:(BOOL)a0;
+ (BOOL)isEnabled;


@end
