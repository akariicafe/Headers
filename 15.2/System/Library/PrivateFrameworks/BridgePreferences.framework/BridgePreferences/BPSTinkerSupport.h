@class NSSManager, AKDevice, FAFamilyMember, FAProfilePictureStore, FAFamilyCircle, NSObject;
@protocol OS_dispatch_queue;

@interface BPSTinkerSupport : NSObject

@property (retain, nonatomic) FAFamilyCircle *cachedFamilyCircle;
@property (retain, nonatomic) FAProfilePictureStore *profilePictureStore;
@property (retain, nonatomic) NSSManager *nssManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) FAFamilyMember *currentTinkerMember;
@property (retain, nonatomic) FAFamilyMember *pairingParentFamilyMember;
@property (retain, nonatomic) FAFamilyMember *organizerParentFamilyMember;
@property (retain, nonatomic) AKDevice *currentTinkerAKDevice;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)cachedTinkerFamilyMemeber;
- (void)setTinkerFamilyMember:(id)a0;
- (void)fetchProfilePictures;
- (BOOL)isActiveTinker;
- (void)getActiveTinkerFamilyMemberWithCompletion:(id /* block */)a0;
- (void)getActiveTinkerFamilyMemberDetailsWithCompletion:(id /* block */)a0;
- (void)getActiveTinkerFamilyDetailsWithCompletion:(id /* block */)a0;
- (id)familyMemberMatchingAccount:(id)a0 inCircle:(id)a1;
- (void)fetchFamilyDetails;
- (void)resetCachedDeviceValues;
- (id)cachedProfilePictureForFamilyMember:(id)a0;
- (id)cachedTinkerAKDevice;
- (id)cachedPairingParentFamilyMember;
- (id)cachedOrganizerParentFamilyMember;
- (void)getActiveTinkerFamilyMember:(id /* block */)a0;

@end
