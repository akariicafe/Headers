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

- (id)init;
- (void).cxx_destruct;
- (id)cachedTinkerFamilyMemeber;
- (id)cachedPairingParentFamilyMember;
- (id)cachedOrganizerParentFamilyMember;
- (id)cachedProfilePictureForFamilyMember:(id)a0;
- (id)cachedTinkerAKDevice;
- (id)familyMemberMatchingAccount:(id)a0 inCircle:(id)a1;
- (void)fetchFamilyDetails;
- (void)fetchProfilePictures;
- (void)getActiveTinkerFamilyDetailsWithCompletion:(id /* block */)a0;
- (void)getActiveTinkerFamilyMember:(id /* block */)a0;
- (void)getActiveTinkerFamilyMemberDetailsWithCompletion:(id /* block */)a0;
- (void)getActiveTinkerFamilyMemberWithCompletion:(id /* block */)a0;
- (BOOL)isActiveTinker;
- (void)resetCachedDeviceValues;
- (void)setTinkerFamilyMember:(id)a0;

@end
