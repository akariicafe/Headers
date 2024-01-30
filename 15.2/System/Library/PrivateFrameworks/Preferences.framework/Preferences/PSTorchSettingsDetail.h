@class NSString;

@interface PSTorchSettingsDetail : NSObject <PSSettingsBoolDetail>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconImage;
+ (void)setEnabled:(BOOL)a0;
+ (BOOL)isEnabled;
+ (long long)torchState;
+ (id)preferencesURL;


@end
