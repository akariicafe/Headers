@class NSMutableArray, RMObserverStore;

@interface RMUIAccountViewModelProvider : NSObject

@property (retain, nonatomic) NSMutableArray *accountViewModels;
@property (retain, nonatomic) RMObserverStore *observerStore;

- (id)init;
- (void).cxx_destruct;
- (id)_detailsForExchangeDeclaration:(id)a0;
- (id)_detailsForCalDAVDeclaration:(id)a0;
- (id)_detailsForCardDAVDeclaration:(id)a0;
- (id)_detailsForDeclaration:(id)a0;
- (id)_detailsForGoogleDeclaration:(id)a0;
- (id)_detailsForLDAPDeclaration:(id)a0;
- (id)_detailsForMailDeclaration:(id)a0;
- (id)_detailsForSubscribedCalendarDeclaration:(id)a0;
- (void)_updateViewModelsWithDeclarations:(id)a0;
- (void)loadAccountsFromConfigurationsWithCompletionHandler:(id /* block */)a0;

@end
