@class NSSet, NSString, NSArray, NSDictionary, NSHashTable, NSObject;
@protocol BSDefaultObserver, OS_dispatch_queue;

@interface CCSModuleRepository : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSArray *_directoryURLs;
    NSSet *_allowedModuleIdentifiers;
    NSDictionary *_allModuleMetadataByIdentifier;
    NSSet *_availableModuleIdentifiers;
    NSSet *_interestingBundleIdentifiers;
    struct MGNotificationTokenStruct { } *_mobileGestaltNotificationToken;
    NSHashTable *_observers;
    NSObject<BSDefaultObserver> *_internalDefaultsObserver;
    NSSet *_loadableModuleIdentifiers;
    BOOL _ignoreAllowedList;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
}

@property (readonly, copy, nonatomic) NSSet *loadableModuleIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_defaultModuleIdentifierAllowedList;
+ (id)repositoryWithDefaults;
+ (id)_deviceFamily;
+ (id)_defaultModuleDirectories;

- (void)_applicationsDidChange:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (id)_queue_moduleIdentifiersForMetadata:(id)a0;
- (void)_queue_updateAllModuleMetadata;
- (void)_queue_unregisterForVisiblityPreferenceChanges;
- (id)moduleMetadataForModuleIdentifier:(id)a0;
- (void)_queue_updateLoadableModuleMetadataForAvailableModuleMetadata:(id)a0;
- (id)_queue_gestaltQuestionsForModuleMetadata:(id)a0;
- (void)_queue_updateInterestingBundleIdentifiersForModuleMetadata:(id)a0;
- (id)_queue_filterModuleMetadataByVisibilityPreference:(id)a0;
- (void)_queue_updateAllModuleMetadataForAllModuleMetadata:(id)a0;
- (id)_queue_filterModuleMetadataByGestalt:(id)a0;
- (void)addObserver:(id)a0;
- (void)_queue_updateAvailableModuleMetadataForAllModuleMetadata:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_queue_registerForVisiblityPreferenceChanges;
- (void)_queue_unregisterForInternalPreferenceChanges;
- (void)_updateAvailableModuleMetadata;
- (void)_queue_registerForInternalPreferenceChanges;
- (id)_initWithDirectoryURLs:(id)a0 allowedModuleIdentifiers:(id)a1;
- (void)_queue_setIgnoreAllowedList:(BOOL)a0;
- (void)_queue_updateAvailableModuleMetadata;
- (BOOL)visibilityForModuleIdentifier:(id)a0;
- (void)_queue_stopObservingGestaltQuestions;
- (void).cxx_destruct;
- (BOOL)_queue_arrayContainsInterestingApplicationProxy:(id)a0;
- (void)_queue_updateGestaltQuestionsForModuleMetadata:(id)a0;
- (void)_queue_startObservingMobileGestaltQuestions:(id)a0 withChangeHandler:(id /* block */)a1;
- (void)invalidate;
- (void)_queue_runBlockOnObservers:(id /* block */)a0;
- (void)setVisibility:(BOOL)a0 forModuleIdentifier:(id)a1;
- (void)_queue_updateLoadableModuleMetadata;
- (id)_queue_filterModuleMetadataByAssociatedBundleAvailability:(id)a0;
- (id)_queue_loadAllModuleMetadata;
- (void)applicationStateDidChange:(id)a0;
- (id)_queue_associatedBundleIdentifiersForModuleMetadata:(id)a0;

@end
