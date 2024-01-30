@class NSUUID, NSString, NSData, NSPredicate, _MKFAccessoryHAP, NSDate, MKFUserRelayAccessTokenDatabaseID, Protocol, _MKFUser;
@protocol MKFAccessoryHAP, MKFUser, MKFHome;

@interface _MKFUserRelayAccessToken : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFUserRelayAccessToken, MKFUserRelayAccessTokenPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSData *accessToken;
@property (retain, nonatomic) _MKFAccessoryHAP *accessory;
@property (retain, nonatomic) _MKFUser *user;
@property (retain, nonatomic) NSData *accessToken;
@property (retain, nonatomic) id<MKFAccessoryHAP> accessory;
@property (readonly, retain, nonatomic) id<MKFUser> user;
@property (readonly, copy, nonatomic) MKFUserRelayAccessTokenDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfUserRelayAccessToken;

@end
