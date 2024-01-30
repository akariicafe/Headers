@interface MCURLListenerListController : PSListController

+ (id)originalURLSender;
+ (void)setOriginalURLSender:(id)a0;

- (void)handleURL:(id)a0;
- (void)_showSheetToInstallConfigurationProfileWithData:(id)a0 withCompletion:(id /* block */)a1;
- (void)_presentNextController:(id)a0 withCompletion:(id /* block */)a1;
- (void)_pushProfileDetailsForProfileWithID:(id)a0 withCompletion:(id /* block */)a1;
- (void)_showSheetToInstallConfigurationProfileFromInstallationQueueWithCompletion:(id /* block */)a0;
- (void)_showSheetToInstallConfigurationProfileFromPurgatoryWithCompletion:(id /* block */)a0;

@end
