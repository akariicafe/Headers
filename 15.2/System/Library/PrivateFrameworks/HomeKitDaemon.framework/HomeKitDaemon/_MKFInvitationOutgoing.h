@class NSUUID, NSString, NSDate, NSPredicate, Protocol, _MKFHome, MKFInvitationOutgoingDatabaseID, NSNumber;
@protocol MKFHome;

@interface _MKFInvitationOutgoing : _MKFInvitation <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFInvitationOutgoing, MKFInvitationOutgoingPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *announceAccessLevel;
@property (copy, nonatomic) NSNumber *cameraAccessLevel;
@property (copy, nonatomic) NSString *inviteeUserID;
@property (copy, nonatomic) NSNumber *privilege;
@property (copy, nonatomic) NSNumber *remoteAccessAllowed;
@property (retain, nonatomic) _MKFHome *home;
@property (copy, nonatomic) NSNumber *announceAccessLevel;
@property (copy, nonatomic) NSNumber *cameraAccessLevel;
@property (copy, nonatomic) NSString *inviteeUserID;
@property (copy, nonatomic) NSNumber *privilege;
@property (copy, nonatomic) NSNumber *remoteAccessAllowed;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, copy, nonatomic) MKFInvitationOutgoingDatabaseID *databaseID;
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
+ (Class)backingModelClass;

- (id)castIfInvitationOutgoing;

@end
