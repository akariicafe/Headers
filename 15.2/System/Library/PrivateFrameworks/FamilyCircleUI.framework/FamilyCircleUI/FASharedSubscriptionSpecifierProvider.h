@class NSDictionary, NSArray, PSSpecifier, FASharedServicesResponse, ACAccount, PSListController, NSOperationQueue;
@protocol FASharedSubscriptionSpecifierProviderDelegeate;

@interface FASharedSubscriptionSpecifierProvider : NSObject {
    PSListController *_presenter;
    PSSpecifier *_spinnerCell;
    ACAccount *_appleAccount;
    FASharedServicesResponse *_sharedSubscriptionResponse;
    BOOL _updateSubsriptionSpecifiers;
    BOOL _isLoadingSpecifiers;
    NSOperationQueue *_networkActivityQueue;
    NSDictionary *_cachedResourceDictionary;
    unsigned long long _specifierState;
}

@property (weak, nonatomic) id<FASharedSubscriptionSpecifierProviderDelegeate> delegate;
@property (copy, nonatomic) NSArray *specifiers;

- (BOOL)handleURL:(id)a0;
- (void).cxx_destruct;
- (void)reloadSpecifiers;
- (id)initWithAppleAccount:(id)a0 presenter:(id)a1;
- (id)_sharedSubscriptionGroupSpecifier;
- (void)_loadSubscriptionServices;
- (id)_serviceSpecifiersFromArray:(id)a0;
- (id)_valueForServiceSpecifier:(id)a0;
- (id)_iconURLStringForService:(id)a0;
- (void)_serviceSpecifierWasTapped:(id)a0;
- (void)_handleSubscriptionListResponse:(id)a0;
- (void)_delayedLoadIfNeeded;
- (BOOL)_launchWithResourceDictionary:(id)a0;
- (id)_specifierNamed:(id)a0;

@end
