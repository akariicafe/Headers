@class RMObserverStore, RMPasscodeSpecifierProvider, RMLegacyProfilesSpecifierProvider;

@interface RMConfigurationsSpecifierProvider : DMCSpecifierProvider

@property (retain, nonatomic) RMLegacyProfilesSpecifierProvider *legacyProfilesProvider;
@property (retain, nonatomic) RMObserverStore *observerStore;
@property (retain, nonatomic) RMPasscodeSpecifierProvider *passcodeProvider;
@property (nonatomic) BOOL knownNoObserverStore;

- (id)initWithAccountManager:(id)a0;
- (id)specifiers;
- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (void)reloadNotificationPosted:(id)a0;
- (id)specifiersReloadedNotificationName;
- (void)_loadObserverStore;
- (void)_reloadControllers;
- (id)_activityIndicatorSpecifier;

@end
