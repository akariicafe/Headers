@class NSString;

@interface _SFPerSitePreferencePopoverDisplayInformation : NSObject

@property (readonly, nonatomic) unsigned long long displayOption;
@property (readonly, copy, nonatomic) NSString *localizedDisplayName;

+ (void)_buildMapIfNeeded;
+ (id)popoverDisplayInformationForPerSitePreference:(id)a0;

- (void).cxx_destruct;
- (id)_initWithDisplayOption:(unsigned long long)a0 localizedDisplayName:(id)a1;

@end
