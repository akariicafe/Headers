@class _TtC14FamilyCircleUI30SubscriptionServicesDataLoader, FASharedService;

@interface FamilyCircleUI.SubscriptionServicesDataLoader : NSObject {
    void /* unknown type, empty encoding */ didFirstLoad;
    void /* unknown type, empty encoding */ lastError;
    void /* unknown type, empty encoding */ _locationAllowed;
    void /* unknown type, empty encoding */ _services;
    void /* unknown type, empty encoding */ _hasChanges;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ account;
    void /* unknown type, empty encoding */ familyMembers;
}

@property (class, nonatomic, retain) _TtC14FamilyCircleUI30SubscriptionServicesDataLoader *sharedInstance;

@property (nonatomic, readonly) FASharedService *locationSharingService;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)firstLoad;
- (void)updateNotification;
- (id)initWithAccount:(id)a0 familyMembers:(id)a1;

@end
