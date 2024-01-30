@class NSHashTable, NSString, NSArray, PSListController, PSSpecifier, NSOperationQueue, FASharedServicesResponse, ACAccount, NSDictionary;
@protocol AAUISpecifierProviderDelegate, FASharedSubscriptionSpecifierProviderSelectionHandler;

@interface FASharedSubscriptionSpecifierProvider : NSObject <AAUISpecifierProvider> {
    PSListController *_presenter;
    PSSpecifier *_spinnerCell;
    ACAccount *_appleAccount;
    FASharedServicesResponse *_sharedSubscriptionResponse;
    NSHashTable *_subscribers;
    BOOL _updateSubsriptionSpecifiers;
    BOOL _isLoadingSpecifiers;
    NSOperationQueue *_networkActivityQueue;
    NSDictionary *_cachedResourceDictionary;
    unsigned long long _specifierState;
    int _numberOfGroups;
}

@property (weak, nonatomic) id<FASharedSubscriptionSpecifierProviderSelectionHandler> selectionHandler;
@property (copy, nonatomic) NSArray *specifiers;
@property (copy, nonatomic) NSArray *subscriptionSpecifiers;
@property (copy, nonatomic) NSArray *subscriptionsFamilyViewSpecifier;
@property (weak, nonatomic) id<AAUISpecifierProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadSpecifiers;
- (BOOL)handleURL:(id)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (id)initWithAppleAccount:(id)a0 presenter:(id)a1;
- (void)_addSharedSubscriptionsButtonWasTapped:(id)a0;
- (void)_delayedLoadIfNeeded;
- (void)_handleSubscriptionListResponse:(id)a0;
- (id)_iconURLStringForService:(id)a0;
- (BOOL)_launchWithResourceDictionary:(id)a0;
- (void)_loadSubscriptionServices;
- (void)_serviceSpecifierWasTapped:(id)a0;
- (id)_serviceSpecifiersFromArray:(id)a0;
- (id)_sharedSubscriptionGroupSpecifier;
- (id)_sharedSubscriptionSpecifierCell:(int)a0;
- (id)_specifierNamed:(id)a0;
- (id)_valueForServiceSpecifier:(id)a0;

@end
