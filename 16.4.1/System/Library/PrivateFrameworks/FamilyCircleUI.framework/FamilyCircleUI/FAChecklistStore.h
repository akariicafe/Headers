@class NSURL, _HKMedicalIDData, NSMutableDictionary, AKAccountManager, ACAccount, HKHealthStore, FASharedService, HKMedicalIDStore, NSSet, FAFamilyCircle, FMFSession, STSetupClient, NSArray, NSNumber, AACustodianController;

@interface FAChecklistStore : NSObject {
    HKHealthStore *_healthStore;
    HKMedicalIDStore *_medicalIDStore;
    unsigned long long _countEmergencyContacts;
    _HKMedicalIDData *_medicalIDData;
    NSArray *_currEmergencyContacts;
    FMFSession *_session;
    AACustodianController *_custodianController;
    NSSet *_membersWithLocation;
    STSetupClient *_setupClient;
    NSMutableDictionary *_incompleteCounts;
    AKAccountManager *_accountManager;
    ACAccount *_authKitAccount;
    NSNumber *_computedIncompleteCount;
}

@property (retain, nonatomic) FAFamilyCircle *familyCircle;
@property (retain, nonatomic) FASharedService *icloudService;
@property (retain, nonatomic) ACAccount *appleAccount;
@property (retain, nonatomic) NSNumber *incompleteItems;
@property (readonly, nonatomic) FASharedService *iCloudService;
@property (nonatomic) long long deviceType;
@property (nonatomic) unsigned long long countMembersIcloudPlus;
@property (retain, nonatomic) NSURL *icloudPlusUrl;
@property (retain, nonatomic) FASharedService *locationSharedService;

- (void)finishSetup;
- (id)init;
- (void).cxx_destruct;
- (void)fetchMyCustodians:(id /* block */)a0;
- (id)_getLocationSharedService:(id)a0;
- (unsigned long long)_handleSubscriptionListResponse:(id)a0;
- (void)clearChecklistCounts;
- (long long)contactManagementEnabledForChild:(id)a0;
- (void)familyLocationSharingStatus:(id /* block */)a0;
- (void)fetchIcloudPlusMembership:(id /* block */)a0;
- (void)fetchMedicalIDData:(id /* block */)a0;
- (void)notifyObservable;
- (void)refreshChecklistCount:(id)a0 account:(id)a1 iCloudService:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)screenTimeEnabledForChild:(id)a0;
- (void)setIncompleteCountFor:(unsigned long long)a0 count:(int)a1;

@end
