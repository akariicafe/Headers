@class NSArray, HKHealthStore, SOSLegacyContactsManager, NSObject;
@protocol OS_dispatch_semaphore;

@interface SOSContactsManager : NSObject {
    int _healthContactsNotificationToken;
    SOSLegacyContactsManager *_legacyContactsManager;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *medicalIDContactsInitialStateSemaphore;
@property (retain, nonatomic) NSArray *medicalIDEmergencyContacts;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } medicalIDEmergencyContactsMutex;
@property (readonly, nonatomic) BOOL SOSContactsExist;
@property (readonly, nonatomic) SOSLegacyContactsManager *legacyContactsManager;

+ (id)contactStore;
+ (BOOL)authorizedToUseContactStore;
+ (void)preloadContactStoreIfNecessary;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_userDefaults;
- (id)initWithHealthStore:(id)a0;
- (void)_medicalContactsDidChange;
- (void)fetchMedicalIDEmergencyContacts;
- (void)_medicalIDEmergencyContactsWithCompletion:(id /* block */)a0;
- (BOOL)_isEmergencyNumber:(id)a0;
- (void)SOSContactsWithTimeout:(double)a0 andCompletion:(id /* block */)a1;
- (id)SOSContactDestinations;
- (id)phoneNumbersToMessage;
- (void)_waitForMedicalIDInitialState;
- (BOOL)hasValidContactsToMessage;

@end
