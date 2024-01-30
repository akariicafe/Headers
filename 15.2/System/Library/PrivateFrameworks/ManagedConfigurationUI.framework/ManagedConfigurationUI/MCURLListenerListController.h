@interface MCURLListenerListController : PSListController

+ (void)setOriginalURLSender:(id)a0;
+ (id)currentInstallationController;
+ (void)setShowingProfileInstallation:(BOOL)a0;
+ (void)setCurrentInstallationController:(id)a0;
+ (id)originalURLSender;
+ (BOOL)showingProfileInstallation;

- (void)handleURL:(id)a0;
- (void)_showSheetToInstallConfigurationProfileWithData:(id)a0 withCompletion:(id /* block */)a1;
- (void)_presentNextController:(id)a0 withCompletion:(id /* block */)a1;
- (void)_showSheetToInstallConfigurationProfileFromInstallationQueueWithCompletion:(id /* block */)a0;
- (void)_showSheetToInstallConfigurationProfileFromPurgatoryWithCompletion:(id /* block */)a0;
- (void)_pushProfileDetailsForProfileWithID:(id)a0 withCompletion:(id /* block */)a1;

@end
