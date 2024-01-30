@class HDHealthOntologyManager, NSSet, HDProfile, NSString, HDConceptIndexManager, HDOntologyAssetManager, HDHealthOntologyConfiguration;
@protocol HDOntologyTester;

@interface HDOntologyLifecycleManager : NSObject <HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDHealthOntologyManagerObserver, HDHealthRecordsAccountEventObserver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
}

@property (retain, nonatomic) HDOntologyAssetManager *assetManager;
@property (retain, nonatomic) HDHealthOntologyManager *ontologyManager;
@property (copy, nonatomic) HDHealthOntologyConfiguration *ontologyConfiguration;
@property (nonatomic, getter=isReady) BOOL ready;
@property (weak, nonatomic) id<HDOntologyTester> ontologyTester;
@property (retain, nonatomic) HDHealthOntologyConfiguration *unitTesting_ontologyConfigurationOverride;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDConceptIndexManager *indexManager;
@property (readonly, copy, nonatomic) NSSet *allSupportedCountryCodes;
@property (readonly, copy, nonatomic) NSSet *improveHealthRecordsGatedAnalyticsEnabledCountryCodes;
@property (readonly, copy, nonatomic) NSSet *optInDataCollectionEnabledCountryCodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateAndWait;
- (id)initWithProfile:(id)a0;
- (BOOL)isCountryCodeSupported:(id)a0;
- (void).cxx_destruct;
- (void)ontologyManagerReferenceOntologyFinishedUpdate:(id)a0 success:(BOOL)a1 error:(id)a2;
- (void)dealloc;
- (void)daemonReady:(id)a0;
- (void)obliterateWithReason:(id)a0;
- (id)ontologyConfigurationForCountryCode:(id)a0;
- (void)ontologyManagerReferenceOntologyCreated:(id)a0;
- (void)_disableAllManagers;
- (void)_enableAllManagers;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)profileExtension:(id)a0 accountEventOccurred:(unsigned long long)a1;
- (void)ontologyManagerReferenceOntologyWillUpdate:(id)a0;
- (void)_evaluateManagerState;
- (BOOL)isCountrySupported:(id)a0;

@end
