@class MKFCKHome, NSUUID, NSString, NSDate;

@interface MKFCKInvitationOutgoing : MKFCKHomeObject

@property (nonatomic) long long announceAccessLevel;
@property (nonatomic) long long cameraAccessLevel;
@property (copy, nonatomic) NSUUID *conflictResolutionUUID;
@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (nonatomic) long long invitationState;
@property (copy, nonatomic) NSString *inviteeUserID;
@property (copy, nonatomic) NSUUID *modelID;
@property (nonatomic) long long privilege;
@property (nonatomic) BOOL remoteAccessAllowed;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (retain, nonatomic) MKFCKHome *home;

+ (id)fetchRequest;

- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
