@class VCVoiceShortcutManager, WFShareSheetWorkflowProvider, VCCKShortcutSyncCoordinator, WFWorkflowRunCoordinator, VCAccessSpecifier, VCCoreDuetListener, NSString;
@protocol VCSyncDataEndpoint;

@interface VCVoiceShortcutManagerAccessWrapper : NSObject <VCVoiceShortcutManagerXPCInterface>

@property (readonly, nonatomic) VCVoiceShortcutManager *voiceShortcutManager;
@property (readonly, nonatomic) VCCoreDuetListener *coreDuetListener;
@property (readonly, nonatomic) WFShareSheetWorkflowProvider *shareSheetProvider;
@property (readonly, nonatomic) id<VCSyncDataEndpoint> syncDataEndpoint;
@property (readonly, nonatomic) VCCKShortcutSyncCoordinator *syncCoordinator;
@property (readonly, nonatomic) WFWorkflowRunCoordinator *runCoordinator;
@property (readonly, copy, nonatomic) VCAccessSpecifier *accessSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)unregisterTriggerWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)sendAceCommandDictionary:(id)a0 completion:(id /* block */)a1;
- (void)getNumberOfVoiceShortcutsWithCompletion:(id /* block */)a0;
- (void)getVoiceShortcutWithPhrase:(id)a0 completion:(id /* block */)a1;
- (void)getVoiceShortcutsForAppWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)addVoiceShortcut:(id)a0 phrase:(id)a1 completion:(id /* block */)a2;
- (void)updateVoiceShortcutWithIdentifier:(id)a0 phrase:(id)a1 shortcut:(id)a2 completion:(id /* block */)a3;
- (void)deleteVoiceShortcutWithIdentifier:(id)a0 name:(id)a1 completion:(id /* block */)a2;
- (void)requestDataMigration:(id /* block */)a0;
- (void)getSiriPodcastsDatabaseURLWithCompletion:(id /* block */)a0;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)generateSingleUseTokenForWorkflowIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getShareSheetWorkflowsForExtensionMatchingDictionaries:(id)a0 hostBundleIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)refreshTriggerWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)fireTriggerWithIdentifier:(id)a0 force:(BOOL)a1 completion:(id /* block */)a2;
- (void)enqueueDialogRequest:(id)a0 runningContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)hasRunEventsInTheLast5DaysWithCompletion:(id /* block */)a0;
- (void)obliterateShortcuts:(id /* block */)a0;
- (void)createShortcutWithRecordData:(id)a0 name:(id)a1 completion:(id /* block */)a2;
- (void)getResultsForWorkflowQuery:(id)a0 resultClassName:(id)a1 completion:(id /* block */)a2;
- (void)getValueForDescriptor:(id)a0 resultClassName:(id)a1 completion:(id /* block */)a2;
- (void)addDefaultShortcutsIfNecessaryWithCompletion:(id /* block */)a0;
- (void)createSleepWorkflow:(id)a0 completion:(id /* block */)a1;
- (void)resetDefaultShortcutFlagsWithCompletion:(id /* block */)a0;
- (void)getSleepActionSuggestionsForAppWithBundleIdentifier:(id)a0 shouldFilterBySleep:(BOOL)a1 completion:(id /* block */)a2;
- (void)getAccessibilityWorkflowsWithCompletion:(id /* block */)a0;
- (void)getSleepActionSuggestionsForAllAppsFilteringBySleep:(BOOL)a0 completion:(id /* block */)a1;
- (void)getSleepActionSuggestionsForAppWithBundleIdentifier:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)deleteSleepWorkflowWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)dismissPresentedContentWithCompletion:(id /* block */)a0;
- (void)getSleepActionSuggestionsForAllAppsWithOptions:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)getAccessibilityWorkflowWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)drawGlyphs:(id)a0 withBackgroundColorValues:(id)a1 intoContext:(id)a2 completion:(id /* block */)a3;
- (void)checkTriggerStateWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getFirstUnsortedWorkflowWithCompletion:(id /* block */)a0;
- (void)showSingleStepCompletionForWebClip:(id)a0 completion:(id /* block */)a1;
- (void)getConfiguredTriggerDescriptionsWithCompletion:(id /* block */)a0;
- (void)resumeWorkflowFromContext:(id)a0 presentationMode:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)stopRunningWorkflowWithRunningContext:(id)a0;
- (void)checkTriggerStateWithKeyPath:(id)a0 completion:(id /* block */)a1;
- (void)runWorkflowWithRequest:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)deleteTriggerWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getVoiceShortcutsWithCompletion:(id /* block */)a0;
- (void)getVoiceShortcutWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)setShortcutSuggestions:(id)a0 forAppWithBundleIdentifier:(id)a1;
- (void)setInteger:(long long)a0 forKey:(id)a1 inDomain:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithVoiceShortcutManager:(id)a0 coreDuetListener:(id)a1 accessSpecifier:(id)a2 syncCoordinator:(id)a3 syncDataEndpoint:(id)a4 runCoordinator:(id)a5;
- (void)describeSyncStateIncludingDeleted:(BOOL)a0 completion:(id /* block */)a1;

@end
