@class NSDictionary, PSSpecifier;

@interface NDOWarrantyInfoController : PSListController

@property (retain) NSDictionary *appSupportDictionary;
@property (retain) PSSpecifier *lastDetailSpecifier;
@property (retain) PSSpecifier *lastCoverageSpecifier;

- (void)delayedAsyncLoadSpecifiers;
- (void).cxx_destruct;
- (id)valueForSpecifier:(id)a0;
- (void)reloadSpecifiers;
- (void)loadView;
- (id)specifiers;
- (void)openURL:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)donePressed:(id)a0;
- (void)reloadAsyncSpecifiersWithCompletion:(id /* block */)a0;
- (void)managePlanPressed:(id)a0;
- (void)_refresh:(id)a0;
- (void)_setValue:(id)a0 forSpecifier:(id)a1;
- (void)updateAppStoreLookupWithCompletion:(id /* block */)a0;
- (void)downloadAppPressed:(id)a0;
- (id)coverageItemSubTitle:(id)a0;
- (void)_addKey:(id)a0 value:(id)a1 isCopyable:(BOOL)a2 toSpecifiers:(id)a3;
- (BOOL)_isValidSubscriptionPlan;
- (void)_addKey:(id)a0 isCopyable:(BOOL)a1 toSpecifiers:(id)a2;
- (id)specifierForID:(id)a0 inSpecifiers:(id)a1;
- (void)footer1Tapped:(id)a0;
- (void)benefitsDescLinkTapped:(id)a0;
- (void)footer2Tapped:(id)a0;
- (void)_setValue:(id)a0 forSpecifierWithKey:(id)a1 inSpecifiers:(id)a2;

@end
