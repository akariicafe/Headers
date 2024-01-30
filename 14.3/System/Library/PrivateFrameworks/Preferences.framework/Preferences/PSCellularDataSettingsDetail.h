@class NSString;

@interface PSCellularDataSettingsDetail : NSObject <PSSettingsBoolDetail>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconImage;
+ (id)preferencesURL;
+ (BOOL)deviceSupportsCellularData;
+ (void)setEnabled:(BOOL)a0;
+ (BOOL)isEnabled;


@end
