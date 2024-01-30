@class NSHashTable, NSString, NSArray, NPSManager, NSTimer, NSMutableDictionary, TCSContacts, CNContactStore, NSObject, CNCoalescingTimer, NSUserDefaults, IDSBatchIDQueryController;
@protocol OS_dispatch_queue;

@interface TCSSuggestions : NSObject <IDSBatchIDQueryControllerDelegate, TCSContactsObserver> {
    int _firstUnlockToken;
    int _npsInitialSyncToken;
    NSObject<OS_dispatch_queue> *_generationQueue;
    NSObject<OS_dispatch_queue> *_coreRecentsQueue;
    NSHashTable *_observers;
    NPSManager *_npsManager;
    CNCoalescingTimer *_suggestionsSaveTimer;
    NSTimer *_suggestionGenerationTimer;
    IDSBatchIDQueryController *_queryController;
    NSMutableDictionary *_suggestedDestinationToStatus;
}

@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) TCSContacts *contacts;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (nonatomic) BOOL shouldObserveSuggestionsDefaultChanges;
@property (retain, nonatomic) NSMutableDictionary *suggestions;
@property (retain, nonatomic) NSArray *suggestedDestinations;
@property (nonatomic) BOOL generationTimerEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_descriptorForRequiredKeys;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)_deviceDidPair:(id)a0;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (void)_invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_saveSuggestions;
- (void)_handleDeviceFirstUnlock;
- (BOOL)_shouldGenerateNewSuggestions;
- (void)_generateNewSuggestions;
- (id)_performHousekeepingOnSuggestions:(id)a0;
- (void)generateNewSuggestionsIfNecessary;
- (void)_stopGenerationTimer;
- (void)_addSuggestedDestination:(id)a0 withTimestamp:(id)a1;
- (void)_notifyObserversSuggestionsChanged;
- (void)_startGenerationTimerWithFireDate:(id)a0;
- (id)_destinationsFromFavorites;
- (id)_destinationsFromCallHistory;
- (id)_destinationsFromCoreRecents;
- (void)_updateGenerationTimestamps;
- (void)_performIDQueryForSuggestions:(id)a0;
- (void)_syncSuggestions;
- (void)destinationsDidChange:(id)a0;
- (id)initWithContactStore:(id)a0 contacts:(id)a1;
- (void)_deleteSuggestions;

@end
