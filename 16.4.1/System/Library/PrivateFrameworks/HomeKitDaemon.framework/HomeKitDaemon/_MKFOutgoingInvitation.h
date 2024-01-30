@class NSUUID, NSString, NSDate, NSPredicate, MKFOutgoingInvitationDatabaseID, CKDeviceToDeviceShareInvitationToken, Protocol, _MKFHome, NSNumber, _MKFUser;
@protocol MKFHome, MKFUser;

@interface _MKFOutgoingInvitation : _MKFInvitation <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFOutgoingInvitation, MKFOutgoingInvitationPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *accessCode;
@property (copy, nonatomic) NSNumber *announceAccessLevel;
@property (copy, nonatomic) NSNumber *cameraAccessLevel;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSString *inviteeUserID;
@property (copy, nonatomic) NSNumber *privilege;
@property (copy, nonatomic) NSNumber *remoteAccessAllowed;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *shareToken;
@property (retain, nonatomic) _MKFHome *home;
@property (retain, nonatomic) _MKFUser *pendingUser;
@property (copy, nonatomic) NSString *accessCode;
@property (copy, nonatomic) NSNumber *announceAccessLevel;
@property (copy, nonatomic) NSNumber *cameraAccessLevel;
@property (copy, nonatomic) NSDate *dateSent;
@property (copy, nonatomic) NSString *inviteeUserID;
@property (copy, nonatomic) NSNumber *privilege;
@property (copy, nonatomic) NSNumber *remoteAccessAllowed;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *shareToken;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (retain, nonatomic) id<MKFUser> pendingUser;
@property (readonly, copy, nonatomic) MKFOutgoingInvitationDatabaseID *databaseID;
@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (copy, nonatomic) NSNumber *invitationState;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfOutgoingInvitation;

@end
