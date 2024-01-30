@interface PSGCertTrustSettings : PSListController

@property (retain, nonatomic) id profileListChangedNotificationObserver;

- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)trustVersionString:(id)a0;
- (id)trustAssetVersionString:(id)a0;
- (id)specifierForTrustSettings:(struct __SecCertificate { } *)a0 isRestricted:(BOOL)a1;
- (void)setFullTrustEnabled:(id)a0 forSpecifier:(id)a1;
- (id)isFullTrustEnabled:(id)a0;

@end
