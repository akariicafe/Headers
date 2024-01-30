@class NSString;

@interface _SFPerSitePreferenceDisplayInformation : NSObject

@property (readonly, copy, nonatomic) NSString *localizedSiteSpecificSettingsTitle;
@property (readonly, copy, nonatomic) NSString *localizedAllWebsiteSettingsTitle;
@property (readonly, copy, nonatomic) NSString *localizedClearAllSettingsPrompt;
@property (readonly, nonatomic) unsigned long long displayOption;

+ (void)_buildMapIfNeeded;
+ (id)displayInformationForPerSitePreference:(id)a0;

- (void).cxx_destruct;
- (id)_initWithLocalizedSiteSpecificSettingsTitle:(id)a0 localizedAllWebsiteSettingsTitle:(id)a1 localizedClearAllSettingsPrompt:(id)a2 displayOption:(unsigned long long)a3;

@end
