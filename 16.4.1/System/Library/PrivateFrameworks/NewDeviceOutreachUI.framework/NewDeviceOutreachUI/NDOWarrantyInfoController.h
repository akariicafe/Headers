@class NSString, NSDictionary, PSSpecifier, NDOACController;

@interface NDOWarrantyInfoController : PSListController <NDOAppleCareFlowDelegate>

@property (retain) NSDictionary *appSupportDictionary;
@property (retain) PSSpecifier *lastDetailSpecifier;
@property (retain) PSSpecifier *lastCoverageSpecifier;
@property BOOL reloadInProgress;
@property BOOL hasLoaded;
@property unsigned long long previousAppSupportAvailablabilityType;
@property (retain) NSString *deeplinkParams;
@property (weak, nonatomic) NDOACController *acController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openURL:(id)a0;
- (void)reloadSpecifiers;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithSpecifier:(id)a0;
- (id)specifiers;
- (void)_refresh:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (id)valueForSpecifier:(id)a0;
- (void)donePressed:(id)a0;
- (void)managePlanPressed:(id)a0;
- (BOOL)isWarrantyValid;
- (void)_addKey:(id)a0 isCopyable:(BOOL)a1 toSpecifiers:(id)a2;
- (void)_addKey:(id)a0 value:(id)a1 isCopyable:(BOOL)a2 toSpecifiers:(id)a3;
- (BOOL)_isValidSubscriptionPlan;
- (void)_refreshWithForcedNetworkPolicy:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_setValue:(id)a0 forSpecifier:(id)a1;
- (void)_setValue:(id)a0 forSpecifierWithKey:(id)a1 inSpecifiers:(id)a2;
- (void)benefitsDescLinkTapped:(id)a0;
- (id)coverageItemSubTitle:(id)a0;
- (void)footer1Tapped:(id)a0;
- (void)footer2Tapped:(id)a0;
- (void)ndoAppleCareCoveragePressed:(id)a0;
- (void)outreachFinishedForDeviceWithSerialNumber:(id)a0 withCompletion:(unsigned long long)a1;
- (void)postCAEventWithDeviceInfo:(id)a0;
- (id)specifierForID:(id)a0 inSpecifiers:(id)a1;
- (void)updateAppStoreLookupWithSpecifiers:(id)a0;
- (void)updateAppSupportSpecifiersWithSpecifiers:(id)a0;

@end
