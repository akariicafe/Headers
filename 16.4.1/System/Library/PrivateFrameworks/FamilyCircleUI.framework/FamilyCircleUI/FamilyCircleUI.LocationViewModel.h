@class _TtC14FamilyCircleUI17LocationViewModel, FASharedService;

@interface FamilyCircleUI.LocationViewModel : NSObject {
    void /* unknown type, empty encoding */ familyCircle;
    void /* unknown type, empty encoding */ _familyMembersSharingLocationWithMe;
    void /* unknown type, empty encoding */ _parentCanToggleChildsLocation;
    void /* unknown type, empty encoding */ _disableLocationToggles;
    void /* unknown type, empty encoding */ _sharingLocationWithFamilyMembers;
    void /* unknown type, empty encoding */ _childCanModifyLocationStatus;
    void /* unknown type, empty encoding */ screenTimeConnection;
    void /* unknown type, empty encoding */ _locationService;
    void /* unknown type, empty encoding */ _membersAutomaticallySharing;
    void /* unknown type, empty encoding */ fmfSession;
    void /* unknown type, empty encoding */ locationListener;
}

@property (class, nonatomic, retain) _TtC14FamilyCircleUI17LocationViewModel *sharedInstance;

@property (nonatomic, retain) FASharedService *locationService;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFamilyCircle:(id)a0 managementState:(id)a1;

@end
