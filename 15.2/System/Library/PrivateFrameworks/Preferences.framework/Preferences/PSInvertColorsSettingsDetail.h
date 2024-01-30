@class NSString;

@interface PSInvertColorsSettingsDetail : NSObject <PSSettingsBoolDetail>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconImage;
+ (void)setEnabled:(BOOL)a0;
+ (BOOL)isEnabled;
+ (id)preferencesURL;


@end
