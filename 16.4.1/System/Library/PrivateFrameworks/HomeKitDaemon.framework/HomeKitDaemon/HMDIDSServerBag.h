@class HMFTimer, IDSServerBag, NSString;
@protocol HMDIDSServerBagDelegate;

@interface HMDIDSServerBag : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly) IDSServerBag *idsServerBag;
@property (readonly) HMFTimer *refreshTimer;
@property (readonly, copy) NSString *keySuffix;
@property (getter=isHH2SoftwareReleased) BOOL hh2SoftwareReleased;
@property (getter=isHH2ManualMigrationEnabled) BOOL hh2ManualMigrationEnabled;
@property (getter=isHH2AutoMigrationEnabled) BOOL hh2AutoMigrationEnabled;
@property BOOL hh2SuppressDuplicateUserModelBulletins;
@property BOOL homeSafetySecurityEnabled;
@property (weak) id<HMDIDSServerBagDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void)timerDidFire:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIDSServerBag:(id)a0 refreshTimer:(id)a1 keySuffix:(id)a2;

@end
