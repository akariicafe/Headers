@interface MCURLListenerListController : PSListController

+ (id)currentInstallationController;
+ (void)setShowingProfileInstallation:(BOOL)a0;
+ (void)setCurrentInstallationController:(id)a0;
+ (void)setOriginalURLSender:(id)a0;
+ (id)originalURLSender;
+ (BOOL)showingProfileInstallation;

- (void)handleURL:(id)a0;
- (void)_showSheetToInstallConfigurationProfileWithData:(id)a0;
- (void)_presentNextController:(id)a0;
- (void)_showSheetToInstallConfigurationProfileFromInstallationQueue;
- (void)_showSheetToInstallConfigurationProfileFromPurgatory;
- (void)_showSheetToInstallProvisioningProfile;
- (void)_pushProfileDetailsForProfileWithID:(id)a0;

@end
