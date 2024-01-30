@class NSDictionary, NSArray, NSUUID, NSString, HMDAccountHandle, HMDAccount, HMDApplicationData;

@interface HMDHomeData : HMFObject <NSCopying, NSMutableCopying>

@property (nonatomic) long long dataVersion;
@property (readonly, copy, nonatomic) NSArray *homes;
@property (readonly, copy, nonatomic) NSArray *accessories;
@property (readonly, copy, nonatomic) NSUUID *primaryHomeUUID;
@property (readonly, copy, nonatomic) NSUUID *lastCurrentHomeUUID;
@property (readonly, nonatomic) long long schemaVersion;
@property (readonly, nonatomic) long long recoveryVersion;
@property (readonly, copy, nonatomic) NSUUID *dataTag;
@property (readonly, copy, nonatomic) NSArray *UUIDsOfRemovedHomes;
@property (readonly, copy, nonatomic) NSArray *cloudZones;
@property (readonly, copy, nonatomic) NSArray *incomingInvitations;
@property (readonly, copy, nonatomic) NSString *currentDevice;
@property (readonly, copy, nonatomic) NSArray *pendingReasonSaved;
@property (readonly, copy, nonatomic) NSArray *pendingUserManagementOperations;
@property (readonly, copy, nonatomic) NSArray *unprocessedOperationIdentifiers;
@property (readonly, copy, nonatomic) HMDApplicationData *applicationData;
@property (readonly, nonatomic) long long residentEnabledState;
@property (readonly, nonatomic) HMDAccount *account;
@property (readonly, copy, nonatomic) NSArray *remoteAccounts;
@property (readonly, nonatomic) HMDAccountHandle *primaryAccountHandle;
@property (readonly, nonatomic) BOOL accessAllowedWhenLocked;
@property (readonly, copy, nonatomic) NSDictionary *demoAccessories;
@property (readonly, nonatomic) BOOL demoFinalized;

+ (void)configureKeyedArchiverClassMappings;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)homeWithUUID:(id)a0;

@end
