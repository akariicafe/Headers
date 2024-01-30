@class ACMonitoredAccountStore, AIDAServiceOwnersManager, FATopLevelSettingsSpecifierProvider, NSString, AIDAAccountManager, NSObject, PSListController;
@protocol OS_dispatch_queue, PSUIFamilySpecifierGeneratorDelegate;

@interface PSUIFamilySpecifierGenerator : NSObject <ACMonitoredAccountStoreDelegateProtocol, AIDAAccountManagerDelegate, AAUISpecifierProviderDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_loadingQueue;
@property (retain, nonatomic) ACMonitoredAccountStore *_accountStore;
@property (retain, nonatomic) FATopLevelSettingsSpecifierProvider *_topLevelSettingsSpecifierProvider;
@property (retain, nonatomic) AIDAAccountManager *_accountManager;
@property (retain, nonatomic) AIDAServiceOwnersManager *_serviceOwnersManager;
@property (weak, nonatomic) id<PSUIFamilySpecifierGeneratorDelegate> delegate;
@property (weak, nonatomic) PSListController *presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accountWasRemoved:(id)a0;
- (void)accountWasAdded:(id)a0;
- (void)specifierProvider:(id)a0 willBeginLoadingSpecifier:(id)a1;
- (id)accountsForAccountManager:(id)a0;
- (void)specifierProvider:(id)a0 showViewController:(id)a1;
- (void)reloadFamilyStateWithCompletion:(id /* block */)a0;
- (id)specifier;
- (void)_handleFamilyChangeNotification:(id)a0;
- (void)_reloadFamilyStateWithCompletion:(id /* block */)a0;
- (void)reloadSpecifiersForProvider:(id)a0 oldSpecifiers:(id)a1 animated:(BOOL)a2;
- (id)initWithLoadingQueue:(id)a0;
- (void)specifierProvider:(id)a0 didFinishLoadingSpecifier:(id)a1;
- (void).cxx_destruct;
- (void)_handleFamilyMarqueeChangeNotification:(id)a0;

@end
