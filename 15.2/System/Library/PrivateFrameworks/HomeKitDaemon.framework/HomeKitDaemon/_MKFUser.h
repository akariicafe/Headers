@class Protocol, NSPredicate, NSDictionary, HMDAccountIdentifier, NSDate, MKFUserDatabaseID, HMDAccountHandle, NSString, NSSet, _MKFEventPresence, _MKFUserSettingsAnnounce, NSNumber, _MKFHome, NSArray, NSUUID;
@protocol MKFHome, MKFEventPresence, MKFUserSettingsAnnounce;

@interface _MKFUser : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFUser, MKFUserPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMDAccountHandle *accountHandle;
@property (retain, nonatomic) HMDAccountIdentifier *accountIdentifier;
@property (copy, nonatomic) NSNumber *announceAccessAllowed;
@property (nonatomic) long long announceAccessLevel;
@property (nonatomic) long long camerasAccessLevel;
@property (copy, nonatomic) NSString *changeTag;
@property (retain, nonatomic) NSDictionary *pairingIdentity;
@property (copy, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (nonatomic) long long privilege;
@property (copy, nonatomic) NSString *relayIdentifier;
@property (nonatomic) BOOL remoteAccessAllowed;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) NSSet *bulletinConditions_;
@property (retain, nonatomic) _MKFHome *home;
@property (retain, nonatomic) _MKFEventPresence *presenceEvent;
@property (retain, nonatomic) NSSet *relayAccessTokens_;
@property (retain, nonatomic) _MKFUserSettingsAnnounce *settingsAnnounce;
@property (retain, nonatomic) NSSet *triggers_;
@property (retain, nonatomic) HMDAccountHandle *accountHandle;
@property (retain, nonatomic) HMDAccountIdentifier *accountIdentifier;
@property (copy, nonatomic) NSNumber *announceAccessAllowed;
@property (copy, nonatomic) NSNumber *announceAccessLevel;
@property (copy, nonatomic) NSNumber *camerasAccessLevel;
@property (copy, nonatomic) NSString *changeTag;
@property (retain, nonatomic) NSDictionary *pairingIdentity;
@property (copy, nonatomic) NSNumber *presenceAuthorizationStatus;
@property (copy, nonatomic) NSNumber *privilege;
@property (copy, nonatomic) NSString *relayIdentifier;
@property (copy, nonatomic) NSNumber *remoteAccessAllowed;
@property (copy, nonatomic) NSString *userID;
@property (readonly, retain, nonatomic) NSArray *bulletinConditions;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, retain, nonatomic) id<MKFEventPresence> presenceEvent;
@property (readonly, retain, nonatomic) NSArray *relayAccessTokens;
@property (retain, nonatomic) id<MKFUserSettingsAnnounce> settingsAnnounce;
@property (readonly, retain, nonatomic) NSArray *triggers;
@property (readonly, copy, nonatomic) MKFUserDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfUser;
- (id)materializeOrCreateBulletinConditionsRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findBulletinConditionsRelationWithModelID:(id)a0;
- (void)addBulletinConditionsObject:(id)a0;
- (void)removeBulletinConditionsObject:(id)a0;
- (id)materializeOrCreateRelayAccessTokensRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findRelayAccessTokensRelationWithModelID:(id)a0;
- (id)materializeOrCreateSettingsAnnounceRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findSettingsAnnounceRelationWithModelID:(id)a0;

@end
