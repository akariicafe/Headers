@class NSDictionary, NSArray, NSUUID, NSString, HMDAccountHandle, HMDAccount, HMDApplicationData;

@interface HMDMutableHomeData : HMDHomeData <NSCopying, NSMutableCopying>

@property (copy, nonatomic) NSArray *homes;
@property (copy, nonatomic) NSArray *accessories;
@property (copy, nonatomic) NSUUID *primaryHomeUUID;
@property (copy, nonatomic) NSUUID *lastCurrentHomeUUID;
@property (nonatomic) long long dataVersion;
@property (nonatomic) long long schemaVersion;
@property (nonatomic) long long recoveryVersion;
@property (copy, nonatomic) NSUUID *dataTag;
@property (copy, nonatomic) NSArray *UUIDsOfRemovedHomes;
@property (copy, nonatomic) NSArray *cloudZones;
@property (copy, nonatomic) NSArray *incomingInvitations;
@property (copy, nonatomic) NSString *currentDevice;
@property (copy, nonatomic) NSArray *pendingReasonSaved;
@property (copy, nonatomic) NSArray *pendingUserManagementOperations;
@property (copy, nonatomic) NSArray *unprocessedOperationIdentifiers;
@property (copy, nonatomic) HMDApplicationData *applicationData;
@property (nonatomic) long long residentEnabledState;
@property (retain, nonatomic) HMDAccount *account;
@property (copy, nonatomic) NSArray *remoteAccounts;
@property (copy, nonatomic) HMDAccountHandle *primaryAccountHandle;
@property (nonatomic) BOOL accessAllowedWhenLocked;
@property (copy, nonatomic) NSDictionary *demoAccessories;
@property (nonatomic) BOOL demoFinalized;

- (void)setAccount:(id)a0;
- (void)setSchemaVersion:(long long)a0;
- (void)setAccessories:(id)a0;
- (void)setCurrentDevice:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDataVersion:(long long)a0;
- (void)setApplicationData:(id)a0;
- (void)setAccessAllowedWhenLocked:(BOOL)a0;
- (void)setHomes:(id)a0;
- (void)setCloudZones:(id)a0;
- (void)setDataTag:(id)a0;
- (void)setDemoAccessories:(id)a0;
- (void)setDemoFinalized:(BOOL)a0;
- (void)setIncomingInvitations:(id)a0;
- (void)setLastCurrentHomeUUID:(id)a0;
- (void)setPendingReasonSaved:(id)a0;
- (void)setPendingUserManagementOperations:(id)a0;
- (void)setPrimaryAccountHandle:(id)a0;
- (void)setPrimaryHomeUUID:(id)a0;
- (void)setRecoveryVersion:(long long)a0;
- (void)setRemoteAccounts:(id)a0;
- (void)setResidentEnabledState:(long long)a0;
- (void)setUUIDsOfRemovedHomes:(id)a0;
- (void)setUnprocessedOperationIdentifiers:(id)a0;

@end
