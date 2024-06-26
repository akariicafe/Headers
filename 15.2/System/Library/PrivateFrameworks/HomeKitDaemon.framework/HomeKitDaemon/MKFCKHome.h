@class NSUUID, NSString, NSDate, NSArray, NSSet, NSData, NSDictionary, MKFCKRoom, MKFCKUser;

@interface MKFCKHome : MKFCKModel

@property (retain, nonatomic) NSDictionary *applicationData;
@property (copy, nonatomic) NSUUID *conflictResolutionUUID;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic) BOOL doorbellChimeEnabled;
@property (copy, nonatomic) NSDate *firstHAPAccessoryAddedDate;
@property (nonatomic) BOOL hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property (nonatomic) BOOL hasOnboardedForAccessCode;
@property (nonatomic) BOOL hasOnboardedForWalletKey;
@property (retain, nonatomic) NSDictionary *homeManagerApplicationData;
@property (copy, nonatomic) NSUUID *modelID;
@property (nonatomic) BOOL multiUserEnabled;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *networkProtectionGroups;
@property (nonatomic) long long networkProtectionMode;
@property (retain, nonatomic) NSData *nfcReaderKey;
@property (nonatomic) long long primaryHomeCounter;
@property (nonatomic) BOOL settingAutomaticSoftwareUpdateEnabled;
@property (nonatomic) BOOL settingAutomaticThirdPartyAccessorySoftwareUpdateEnabled;
@property (nonatomic) long long settingMediaMinimumUserPrivilege;
@property (copy, nonatomic) NSString *settingMediaPassword;
@property (nonatomic) BOOL settingMediaPeerToPeerEnabled;
@property (copy, nonatomic) NSString *threadNetworkID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (retain, nonatomic) NSSet *accessories;
@property (retain, nonatomic) MKFCKRoom *defaultRoom;
@property (retain, nonatomic) NSSet *invitations;
@property (retain, nonatomic) MKFCKUser *owner;
@property (retain, nonatomic) NSSet *residents;
@property (retain, nonatomic) NSSet *rooms;
@property (retain, nonatomic) NSSet *scenes;
@property (retain, nonatomic) NSSet *triggers;
@property (retain, nonatomic) NSSet *users;
@property (retain, nonatomic) NSSet *zones;

+ (id)fetchRequest;
+ (id)_createHomeManagerContextFromContext:(id)a0;
+ (id)_homeManagerHomeWithModelID:(id)a0 homeManager:(id)a1 context:(id)a2;
+ (id)_homeManagerContextFromContext:(id)a0;
+ (id)createWithLocalModel:(id)a0 context:(id)a1;
+ (BOOL)importInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)importUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)importDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)exportInsertWithObjectID:(id)a0 additionalUpdates:(id)a1 context:(id)a2;
+ (BOOL)exportUpdateWithObjectID:(id)a0 updatedProperties:(id)a1 additionalUpdates:(id)a2 context:(id)a3;
+ (BOOL)exportDeleteWithObjectID:(id)a0 modelID:(id)a1 additionalUpdates:(id)a2 context:(id)a3;

- (BOOL)_importHomeManagerWithContext:(id)a0;
- (BOOL)_exportHomeManagerWithContext:(id)a0;
- (BOOL)_importUsersIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)_exportUsersFromLocalModel:(id)a0 context:(id)a1;
- (BOOL)_importRelationshipsIntoLocalModel:(id)a0 localRelationshipName:(id)a1 context:(id)a2;
- (BOOL)_exportRelationshipsFromLocalModel:(id)a0 localRelationshipName:(id)a1 context:(id)a2;
- (id)initWithContext:(id)a0 assignStore:(id)a1;
- (BOOL)_exportRelationshipsFromLocalModel:(id)a0 localRelationship:(id)a1 cloudRelationship:(id)a2 context:(id)a3;
- (id)homeModelID;
- (BOOL)_exportInvitationOutgoingFromLocalModel:(id)a0 context:(id)a1;
- (BOOL)_exportResidentsFromLocalModel:(id)a0 context:(id)a1;
- (BOOL)_exportTriggersFromLocalModel:(id)a0 context:(id)a1;
- (BOOL)_exportSettingsFromLocalModel:(id)a0 context:(id)a1;
- (BOOL)_exportScenesFromLocalModel:(id)a0 context:(id)a1;
- (BOOL)_exportApplicationDataFromLocalModel:(id)a0 context:(id)a1;
- (BOOL)_exportAccessoriesFromLocalModel:(id)a0 context:(id)a1;
- (BOOL)_exportZonesFromLocalModel:(id)a0 context:(id)a1;
- (BOOL)_exportRoomsFromLocalModel:(id)a0 context:(id)a1;
- (BOOL)_importInvitationOutgoingIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)_importResidentsIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)_importTriggersIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)_importSettingsIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)_importScenesIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)_importApplicationDataIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)_importAccessoriesIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)_importZonesIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)_importRoomsIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)validateOwner:(id *)a0 error:(id *)a1;
- (BOOL)_importAutomationsIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)_exportAutomationsFromLocalModel:(id)a0 context:(id)a1;

@end
