@class FASharedSubscriptionSpecifierProvider, NSString, UITableViewCell, NSOperationQueue, ACAccount, UIActivityIndicatorView;

@interface FASharedSubscriptionsViewController : ACUIViewController <FASharedSubscriptionSpecifierProviderSelectionHandler, AAUISpecifierProviderDelegate> {
    ACAccount *_appleAccount;
    NSOperationQueue *_networkingQueue;
    UITableViewCell *_activeCell;
    FASharedSubscriptionSpecifierProvider *_sharedSubscriptionSpecifierProvider;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferredContentSizeCategory;
- (void)viewDidLoad;
- (id)specifiers;
- (void)reloadSpecifiersForProvider:(id)a0 oldSpecifiers:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_hasActiveCell;
- (void)_performEventWithContext:(id)a0 specifier:(id)a1 completion:(id /* block */)a2;
- (id)_sharedSubscriptionSpecifiers;
- (void)_startSpinnerInCellLoadingRemoteUI:(id)a0;
- (void)_stopSpinnerInCellLoadingRemoteUI;
- (void)didSelectSpecifier:(id)a0;
- (id)initWithAppleAccount:(id)a0 sharedSubscriptionSpecifierProvider:(id)a1;

@end
