@class PSSpecifier, NSArray, NSString, AIDAAccountManager, ICQInternetPrivacyViewModel;
@protocol AAUISpecifierProviderDelegate;

@interface ICQInternetPrivacyLocationSharingSpecifierProvider : NSObject <AAUISpecifierProvider>

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (retain, nonatomic) ICQInternetPrivacyViewModel *viewModel;
@property (nonatomic) BOOL locationSharingEnabled;
@property (retain, nonatomic) PSSpecifier *enableSpecifier;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (copy, nonatomic) NSArray *specifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccountManager:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_reloadSpecifiers;
- (void)_specifierWasTapped:(id)a0;
- (void)_startFetchingSharingLocationPreference;

@end
