@class NSUUID, NSString, PSSpecifier, NSMutableArray;

@interface DNSSettingsController : PSListController

@property (copy) NSUUID *serviceID;
@property (retain) NSString *applicationName;
@property (retain) NSString *serverName;
@property (retain) NSString *typeIdentifier;
@property (retain) PSSpecifier *automaticDNSSettingsSpecifier;
@property (retain) NSMutableArray *currentDNSSettingsSpecifiers;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)someConfigurationChanged:(id)a0;
- (void)disableAllDNSSettings;
- (void)toggleDNSSettingsForSpecifier:(id)a0;
- (void)showDNSSettingsPrivacyPage;

@end
