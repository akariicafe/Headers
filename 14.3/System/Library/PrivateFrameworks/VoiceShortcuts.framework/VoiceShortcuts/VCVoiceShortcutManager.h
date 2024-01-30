@class NSString, HMHomeManager, WFDatabase;
@protocol VCDatabaseProvider;

@interface VCVoiceShortcutManager : NSObject <HMHomeManagerDelegate>

@property (readonly, nonatomic) HMHomeManager *homeManager;
@property (nonatomic) BOOL addingDefaultShortcuts;
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, nonatomic) id<VCDatabaseProvider> databaseProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)createSleepWorkflow:(id)a0 completion:(id /* block */)a1;
- (void)deleteSleepWorkflowWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)initWithDatabaseProvider:(id)a0;
- (void)getResultsForWorkflowQuery:(id)a0 resultClass:(Class)a1 completion:(id /* block */)a2;
- (void)getValueForDescriptor:(id)a0 resultClass:(Class)a1 completion:(id /* block */)a2;
- (void)getNumberOfVoiceShortcutsWithAccessSpecifier:(id)a0 completion:(id /* block */)a1;
- (void)getVoiceShortcutWithIdentifier:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)getVoiceShortcutWithPhrase:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)getVoiceShortcutsWithAccessSpecifier:(id)a0 completion:(id /* block */)a1;
- (void)getVoiceShortcutsForAppsWithBundleIdentifiers:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)getInactiveAppsWithAccessSpecifier:(id)a0 completion:(id /* block */)a1;
- (void)addVoiceShortcut:(id)a0 phrase:(id)a1 accessSpecifier:(id)a2 completion:(id /* block */)a3;
- (void)updateVoiceShortcutWithIdentifier:(id)a0 phrase:(id)a1 shortcut:(id)a2 accessSpecifier:(id)a3 completion:(id /* block */)a4;
- (void)deleteVoiceShortcutWithIdentifier:(id)a0 name:(id)a1 accessSpecifier:(id)a2 completion:(id /* block */)a3;
- (BOOL)phraseHasHomeKitConflict:(id)a0;
- (BOOL)isPhraseUsable:(id)a0 inDatabase:(id)a1 error:(id *)a2;
- (void)drawGlyphs:(id)a0 withBackgroundColorValues:(id)a1 intoContext:(id)a2;
- (void)setShortcutSuggestions:(id)a0 forAppWithBundleIdentifier:(id)a1 accessSpecifier:(id)a2;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)deleteStaleSuggestions;
- (void)deleteSuggestionsFromApps:(id)a0;
- (BOOL)lsDatabaseChangedSinceLastCheck;
- (void)updateLSDatabaseAnchors;
- (void)getDefaultShortcutEligibilityWithCompletion:(id /* block */)a0;
- (void)addDefaultShortcutsWithAccessSpecifier:(id)a0 completion:(id /* block */)a1;
- (void)addDefaultShortcutsWithCompletion:(id /* block */)a0;
- (void)addNewFolderWithPersonalizedShortcuts:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetDefaultShortcutFlagsWithAccessSpecifier:(id)a0 completion:(id /* block */)a1;
- (void)getSleepActionSuggestionsForAppWithBundleIdentifier:(id)a0 shouldFilterBySleep:(BOOL)a1 accessSpecifier:(id)a2 completion:(id /* block */)a3;
- (void)getSleepActionSuggestionsForAllAppsFilteringBySleep:(BOOL)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)getSleepActionSuggestionsForAppWithBundleIdentifier:(id)a0 accessSpecifier:(id)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)getSleepActionSuggestionsForAllAppsWithOptions:(unsigned long long)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)requestShortcutsSpotlightFullReindex;
- (void)requestDataMigrationWithCompletion:(id /* block */)a0;
- (void)createShortcutWithRecordData:(id)a0 name:(id)a1 accessSpecifier:(id)a2 completion:(id /* block */)a3;
- (void)logHomescreenFastPathRunEventForShortcutWithWebClip:(id)a0;

@end
