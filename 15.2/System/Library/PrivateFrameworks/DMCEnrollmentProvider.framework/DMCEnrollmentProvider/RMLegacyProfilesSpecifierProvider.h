@class NSArray, RMObserverStore;

@interface RMLegacyProfilesSpecifierProvider : NSObject

@property (retain, nonatomic) NSArray *declarations;
@property (retain, nonatomic) RMObserverStore *observerStore;

- (id)specifiers;
- (void).cxx_destruct;
- (id)initWithWithObserverStore:(id)a0;
- (id)_isActivatedProfileText:(id)a0;
- (void)loadProfilesFromConfigurationsWithCompletionHandler:(id /* block */)a0;
- (void)activateConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)deactivateConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
