@interface PSGCertTrustSettings : PSListController

@property (retain, nonatomic) id profileListChangedNotificationObserver;

- (id)specifiers;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)isFullTrustEnabled:(id)a0;
- (void)setFullTrustEnabled:(id)a0 forSpecifier:(id)a1;
- (id)specifierForTrustSettings:(struct __SecCertificate { } *)a0 isRestricted:(BOOL)a1;
- (id)trustAssetVersionString:(id)a0;
- (id)trustVersionString:(id)a0;

@end
