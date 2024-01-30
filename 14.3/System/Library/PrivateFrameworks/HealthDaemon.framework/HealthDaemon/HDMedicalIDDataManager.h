@class NSString, HDProfile, NSObject;
@protocol OS_dispatch_queue;

@interface HDMedicalIDDataManager : NSObject <HDAnalyticsSubmissionCoordinatorDelegate, HDHealthDaemonReadyObserver>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (id)_fetchMedicalIDDataFromDiskWithError:(id *)a0;
- (void)badgeHealthAppForEmergencyContactConsolidationWithCompletion:(id /* block */)a0;
- (id)fetchMedicalIDDataIfSetUpOrCreateDefaultWithError:(id *)a0;
- (void)_badgeHealthAppForEmergencyContactConsolidationWithCompletion:(id /* block */)a0;
- (id)_medicalIDURL;
- (void).cxx_destruct;
- (BOOL)_persistMedicalIDDataFileToDisk:(id)a0 error:(id *)a1;
- (void)_updateShowMedicalIdOnWatch:(BOOL)a0;
- (BOOL)obliterateMedicalIDDataWithReason:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)unitTest_medicalIDData;
- (BOOL)updateMedicalIDWithLocalData:(id)a0 error:(id *)a1;
- (void)daemonReady:(id)a0;
- (id)_medicalIDURLWithDirectoryPath:(id)a0;
- (BOOL)updateMedicalIDWithSyncedData:(id)a0 provenance:(id)a1 error:(id *)a2;
- (id)fetchMedicalIDIfSetUpWithError:(id *)a0;
- (void)reportDailyAnalyticsWithCoordinator:(id)a0 completion:(id /* block */)a1;
- (BOOL)deleteMedicalIDDataWithError:(id *)a0;
- (id)medicalIDClinicalContactsWithError:(id *)a0;
- (id)_unarchiveMedicalIDDataWithRawData:(id)a0 error:(id *)a1;
- (void)_setAllowedToMessageSOSContactsIfApplicableForMedicalID:(id)a0;
- (BOOL)unitTest_persistMedicalIDData:(id)a0;
- (id)medicalIDEmergencyContactsWithError:(id *)a0;
- (id)fetchMedicalIDWithError:(id *)a0;
- (BOOL)_isDateSavedEarlierForMedicalID:(id)a0 originalMedicalID:(id)a1;
- (BOOL)_migrateMedicalIDLocationIfNecessary:(id *)a0;
- (BOOL)_persistMedicalIDData:(id)a0 originalData:(id)a1 provenance:(id)a2 error:(id *)a3;
- (void)_triggerSyncForSuccessfulMedicalIDUpdate;

@end
