@class NSString, NSDictionary, NSArray, NSMutableDictionary, NSMapTable;
@protocol PTEditingServerDataSource, PTEditingServerDelegate;

@interface PTUIEditingServer : NSObject <PTSettingsKeyPathObserver, _PTSettingsRestoreDefaultsObserver, PTChoiceRowDataSource> {
    id<PTEditingServerDataSource> _dataSource;
    id<PTEditingServerDelegate> _delegate;
    NSDictionary *_domainInfoByID;
    NSDictionary *_testRecipeInfoByID;
    NSArray *_domainGroupNames;
    NSMutableDictionary *_domainIDsByGroupName;
    NSMutableDictionary *_rootSettingsByDomainID;
    NSMutableDictionary *_proxyDefinitionsByDomainID;
    NSMutableDictionary *_testRecipeIDsByDomainID;
    NSMapTable *_moduleControllerByDomainID;
}

@property (nonatomic) BOOL forRemoteEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)settings:(id)a0 changedValueForKeyPath:(id)a1;
- (id)_settingsSection;
- (long long)numberOfSectionsForChoiceRow:(id)a0;
- (id)choiceRow:(id)a0 titleForSection:(long long)a1;
- (long long)choiceRow:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)choiceRow:(id)a0 valueForRow:(long long)a1 inSection:(long long)a2;
- (id)choiceRow:(id)a0 titleForRow:(long long)a1 inSection:(long long)a2;
- (id)choiceRow:(id)a0 shortTitleForRow:(long long)a1 inSection:(long long)a2;
- (void)settingsWillRestoreDefaults:(id)a0;
- (void)settingsDidRestoreDefaults:(id)a0;
- (void)reloadDomains;
- (void)reloadTestRecipes;
- (void)proxyDefinitionChanged:(id)a0;
- (id)_loadRootSettingsOrProxyForDomainID:(id)a0;
- (id)_testRecipeSection;
- (id)domainIDForRootSettings:(id)a0;
- (id)domainGroupNames;
- (id)_settingsGroupRow:(id)a0;
- (id)_settingsDomainGroupModule:(id)a0;
- (id)domainIDsInGroup:(id)a0;
- (id)_settingsDomainRow:(id)a0;
- (id)rootSettingsForDomainID:(id)a0;
- (id)displayNameForDomainID:(id)a0;
- (void)_enumerateDomainsWithOneOrMoreTestRecipesUsingBlock:(id /* block */)a0;
- (id)_recipeIDForRow:(long long)a0 inSection:(long long)a1;
- (id)titleForTestRecipeID:(id)a0;
- (id)testRecipeIDsForDomainID:(id)a0;
- (id)initWithDataSource:(id)a0 delegate:(id)a1 forRemoteEditing:(BOOL)a2;
- (id)groupNameForDomainID:(id)a0;
- (id)testRecipeSelectionModule;
- (id)settingsEditingModule;

@end
