@class NSString, HMIHomePersonManager, HMDHome, HMHomePersonManagerSettings;

@interface HMDHomePersonManager : HMDPersonManager <HMFLogging, HMDDatabaseZoneManagerDataSource>

@property (readonly, copy) HMHomePersonManagerSettings *dataUnavailableHomeSettings;
@property (weak) HMDHome *home;
@property (readonly) HMIHomePersonManager *hmiPersonManager;
@property (readonly, copy) HMHomePersonManagerSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (BOOL)manager:(id)a0 shouldShareWithUser:(id)a1;
- (BOOL)manager:(id)a0 shouldGrantWriteAccessToUser:(id)a1;
- (BOOL)zoneManager:(id)a0 shouldRequestShareInvitationFromUser:(id)a1;
- (void)configureWithHome:(id)a0;
- (BOOL)sharesFaceClassifications;
- (void)handleUpdatedSettings:(id)a0;
- (id)updateSettingsUsingMessagePayload:(id)a0;
- (void)handleUserCamerasAccessLevelDidChangeNotification:(id)a0;
- (void)handleUserRemoteAccessDidChangeNotification:(id)a0;
- (BOOL)syncsPersonData;
- (id)initWithUUID:(id)a0 zoneManager:(id)a1 dataReceivers:(id)a2 workQueue:(id)a3 home:(id)a4;
- (id)initWithHome:(id)a0 zoneUUID:(id)a1 workQueue:(id)a2;

@end
