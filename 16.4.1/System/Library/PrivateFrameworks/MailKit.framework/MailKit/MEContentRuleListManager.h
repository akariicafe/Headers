@class MEAppExtensionsController, NSHashTable, EFDebouncer, EFCancelationToken, EFLocked;
@protocol EFAssertableScheduler;

@interface MEContentRuleListManager : NSObject <MEAppExtensionsObserver> {
    MEAppExtensionsController *_extensionsController;
    EFLocked *_remoteExtensions;
    EFCancelationToken *_extensionsObserverCancelable;
    EFLocked *_activeRuleListsByIdentifier;
    NSHashTable *_observers;
    id<EFAssertableScheduler> _observationScheduler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    EFDebouncer *_reloadDebouncer;
}

+ (id)log;

- (void)dealloc;
- (id)initWithExtensionsController:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)extensionsMatched:(id)a0;
- (void)extensionsNoLongerMatching:(id)a0;
- (id)addObserver:(id)a0 activeRuleLists:(id *)a1;
- (id)_activeRuleLists;
- (void)_compileAndAddContentRuleListForIdentifier:(id)a0 encodedContentRuleList:(id)a1;
- (id)_encodedContentRuleListForExtension:(id)a0;
- (void)_handleExtensionsAdded:(id)a0;
- (void)_handleExtensionsRemoved:(id)a0;
- (void)_notifyObserversOfNewContentRuleList:(id)a0;
- (void)_notifyObserversOfRemovedContentRuleList:(id)a0;
- (void)_notifyObserversOfUpdatedContentRuleList:(id)a0 oldContentRuleList:(id)a1;
- (void)_reloadContentRuleLists;
- (void)_scheduleContentRuleListReload;

@end
