@class NSHashTable, NSString, NSArray, NSMutableDictionary, NSDictionary, NSObject, HDProfile, ACHTemplateEntityWrapper, NSMutableSet;
@protocol OS_dispatch_queue;

@interface ACHTemplateStore : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver, ACHTemplateEntitySyncedTemplatesObserver>

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) ACHTemplateEntityWrapper *entityWrapper;
@property (nonatomic) unsigned char device;
@property (retain, nonatomic) NSMutableSet *templates;
@property (retain, nonatomic) NSMutableDictionary *templatesByUniqueName;
@property (retain, nonatomic) NSMutableDictionary *templatesByKey;
@property (retain, nonatomic) NSDictionary *templatesReadyToAdd;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (nonatomic) BOOL initialFetchComplete;
@property (readonly, nonatomic) NSArray *allTemplates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)daemonReady:(id)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (BOOL)_queue_addTemplates:(id)a0 provenance:(long long)a1 databaseContext:(id)a2 triggerSync:(BOOL)a3 error:(id *)a4;
- (void)_addTemplatesToLocalCollections:(id)a0;
- (void)_notifyObserversOfInitialFetchCompletion;
- (id)_queue_templatesFilteredForDuplicates:(id)a0;
- (BOOL)_isValidTemplate:(id)a0;
- (BOOL)_queue_addTemplatesToDatabase:(id)a0 provenance:(long long)a1 databaseContext:(id)a2 error:(id *)a3;
- (void)_notifyObserversOfNewTemplates:(id)a0;
- (BOOL)removeTemplates:(id)a0 error:(id *)a1;
- (void)_notifyObserversOfRemovedTemplates:(id)a0;
- (BOOL)_removeTemplatesFromDatabase:(id)a0 error:(id *)a1;
- (void)_removeTemplatesFromLocalCollections:(id)a0;
- (void)templateEntityDidReceiveSyncedTemplates:(id)a0 provenance:(long long)a1;
- (id)initWithProfile:(id)a0 entityWrapper:(id)a1 device:(unsigned char)a2;
- (id)templateForUniqueName:(id)a0;
- (id)templateForTemplateKey:(unsigned long long)a0;
- (id)availableTemplatesForDateComponents:(id)a0 countryCode:(id)a1;
- (void)loadAllTemplatesFromDatabaseIfNecessary;
- (void)addTemplates:(id)a0;
- (BOOL)addTemplates:(id)a0 databaseContext:(id)a1 error:(id *)a2;
- (BOOL)removeAllTemplates:(id *)a0;

@end
