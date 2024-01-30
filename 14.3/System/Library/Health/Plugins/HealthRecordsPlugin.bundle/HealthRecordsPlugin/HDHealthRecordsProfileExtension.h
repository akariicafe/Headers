@class HKObserverSet, HDProfile, NSLocale, HDMedicalCodingDataManager, HRSSupportedFHIRConfiguration, HDClinicalOptInDataUploadManager, NSString, HDHealthRecordsAPIReminderRegistry, HDClinicalAnalyticsManager, HDClinicalOptInDataCollectionManager, HDClinicalDailyAnalyticsManager, HDClinicalIngestionManager, HDClinicalAccountManager, HDClinicalOptInStudy, HDClinicalProviderServiceManager;
@protocol HDHealthDaemon;

@interface HDHealthRecordsProfileExtension : NSObject <HDClinicalAccountStateObserver, HDProfileExtension, HDHealthRecordsProfileExtension> {
    id<HDHealthDaemon> _healthDeamon;
    NSLocale *_lastKnownLocale;
    long long _lastKnownSupportedStatus;
    HKObserverSet *_chrSupportedObservers;
    HKObserverSet *_accountEventObservers;
    HRSSupportedFHIRConfiguration *_supportedFHIRConfiguration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _ivarLock;
}

@property (copy, nonatomic) HRSSupportedFHIRConfiguration *unitTesting_supportedFHIRConfigurationOverride;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDClinicalAccountManager *accountManager;
@property (readonly, nonatomic) HDClinicalAnalyticsManager *analyticsManager;
@property (readonly, nonatomic) HDClinicalDailyAnalyticsManager *dailyAnalyticsManager;
@property (readonly, nonatomic) HDHealthRecordsAPIReminderRegistry *APIReminderRegistry;
@property (readonly, nonatomic) HDClinicalIngestionManager *ingestionManager;
@property (readonly, nonatomic) HDClinicalProviderServiceManager *providerServiceManager;
@property (readonly, nonatomic) HDClinicalOptInStudy *optInStudy;
@property (readonly, nonatomic) HDClinicalOptInDataCollectionManager *optInDataCollectionManager;
@property (readonly, nonatomic) HDClinicalOptInDataUploadManager *optInDataUploadManager;
@property (readonly, nonatomic) HDMedicalCodingDataManager *medicalCodingDataManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)removeAccountEventObserver:(id)a0;
- (void)_ivarLock_unregisterAsAccountStateObserverIfAppropriate;
- (void)_notifyAccountEventObserversOfEvent:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)deviceConfigurationSupportsHealthRecords:(BOOL *)a0 error:(id *)a1;
- (void)addAccountEventObserver:(id)a0;
- (void)_ivarLock_registerAsAccountStateObserverIfNeeded;
- (void)unitTesting_triggerLocaleDidChangeNotification;
- (void)_notifyHealthRecordsSupportedChangeObservers;
- (void)unitTesting_replaceHealthRecordsPluginAndSetCompleteScheduledExtractionHandler:(id /* block */)a0;
- (void)_ivarLock_updateHealthRecordsSupportedStatus;
- (BOOL)isSupportedFHIRResourceType:(id)a0 FHIRVersionString:(id)a1;
- (BOOL)isSupportedFHIRVersionString:(id)a0;
- (id)createHealthRecordsAPIReminderRegistry;
- (void)registerHealthRecordsSupportedChangeObserver:(id)a0;
- (id)createHealthRecordsClinicalAccountManager;
- (id)_retrieveSupportedFHIRConfigurationWithError:(id *)a0;
- (BOOL)hasAccounts:(BOOL *)a0 error:(id *)a1;
- (void)unregisterHealthRecordsSupportedChangeObserver:(id)a0;
- (void)_localeDidChange:(id)a0;
- (BOOL)_isHealthRecordsSupportedLocale:(id)a0;
- (id)createHealthRecordsXPCServiceClient;
- (void)_ivarLock_determineHealthRecordsSupportedStatusIfNeeded;
- (id)_supportedFHIRConfiguration;
- (void)accountManager:(id)a0 account:(id)a1 didChangeState:(long long)a2;

@end
