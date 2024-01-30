@class HMIExternalPersonManager, HMDUser, HMPhotosPersonManagerSettings, NSString;

@interface HMDPhotosPersonManager : HMDPersonManager <HMFLogging, HMDDatabaseZoneManagerDataSource>

@property (readonly, copy) HMPhotosPersonManagerSettings *dataUnavailableExternalSettings;
@property (weak) HMDUser *user;
@property (readonly) HMIExternalPersonManager *hmiPersonManager;
@property (readonly, copy) HMPhotosPersonManagerSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)zoneManager:(id)a0 shouldRequestShareInvitationFromUser:(id)a1;
- (BOOL)manager:(id)a0 shouldShareWithUser:(id)a1;
- (id)initWithUser:(id)a0 zoneUUID:(id)a1 workQueue:(id)a2;
- (id)initWithUUID:(id)a0 zoneManager:(id)a1 dataReceivers:(id)a2 workQueue:(id)a3 user:(id)a4;
- (BOOL)sharesFaceClassifications;
- (void)handleUpdatedSettings:(id)a0;

@end
