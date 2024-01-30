@class NSMutableDictionary, _HKMedicalIDData, HKHealthStore, CNUIContactsEnvironment;
@protocol CNScheduler;

@interface CNHealthStoreManager : NSObject {
    int _healthNotificationToken;
}

@property (retain, nonatomic) CNUIContactsEnvironment *environment;
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData;
@property (readonly, nonatomic) id<CNScheduler> workQueue;
@property (nonatomic) BOOL needsFetching;
@property (nonatomic) BOOL isListeningToChanges;
@property (readonly, nonatomic) NSMutableDictionary *medicalIDDataHandlers;
@property (readonly, nonatomic) id<CNScheduler> stateLock;
@property (retain, nonatomic) HKHealthStore *healthStore;

+ (id)descriptorForRequiredKeys;
+ (id)identifiersForContactMatchingEmergencyContacts:(id)a0 contactStore:(id)a1;
+ (BOOL)shouldShowEmergencyContacts;
+ (id /* block */)emergencyContactMatchingContact:(id)a0;

- (void)startListeningForChanges;
- (void)unregisterHandlerForToken:(id)a0;
- (void).cxx_destruct;
- (id)createMedicalIDFromContact:(id)a0;
- (void)dealloc;
- (id)initWithEnvironment:(id)a0;
- (id)nts_lazyHealthStore;
- (void)updateAndDispatchMedicalIDData;
- (id)registerMedicalIDDataHandler:(id /* block */)a0;
- (id)initWithEnvironment:(id)a0 healthStore:(id)a1;

@end
