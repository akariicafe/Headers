@class NSString, HDProfile, NSHashTable, HDKeyValueDomain, NSObject, NSError;
@protocol OS_dispatch_queue;

@interface ACHDataStore : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver>

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDKeyValueDomain *defaultsDomain;
@property (nonatomic) BOOL needsPopulationWhenProtectedDataAvailable;
@property (nonatomic) BOOL hasCompletedFirstPopulateFromDatabase;
@property (nonatomic) BOOL populatesValuesFromDatabase;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSError *injectedError;
@property (copy, nonatomic) id /* block */ populationCompleteBlock;
@property (retain, nonatomic) NSHashTable *propertyProviders;
@property (copy, nonatomic) NSString *databaseIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)daemonReady:(id)a0;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)addPropertyProvider:(id)a0;
- (void)_syncEntityDidReceiveValues:(id)a0;
- (BOOL)_queue_populateAllPropertiesFromDatabase;
- (BOOL)_queue_populateFromDatabaseForProviders:(id)a0 error:(id *)a1;
- (BOOL)_queue_setDatabaseIdentifier:(id)a0 error:(id *)a1;
- (BOOL)clearAllPropertiesWithError:(id *)a0 databaseContext:(id)a1;
- (void)commitAllPropertiesToDatabaseWithContext:(id)a0 completion:(id /* block */)a1;
- (id)_queue_dictionaryRepresentationOfAllProviderProperties;
- (id)_queue_allPropertyProviderKeys;
- (void)_injectError:(id)a0;
- (BOOL)_forceDatabasePopulate;

@end
