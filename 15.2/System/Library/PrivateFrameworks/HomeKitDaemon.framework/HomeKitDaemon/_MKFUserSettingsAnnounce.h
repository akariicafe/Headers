@class NSUUID, NSString, MKFUserSettingsAnnounceDatabaseID, NSPredicate, NSDate, Protocol, _MKFUser, NSNumber;
@protocol MKFUser, MKFHome;

@interface _MKFUserSettingsAnnounce : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFUserSettingsAnnounce, MKFUserSettingsAnnouncePrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *announceNotificationModeForCurrentDevice;
@property (retain, nonatomic) _MKFUser *user;
@property (copy, nonatomic) NSNumber *announceNotificationModeForCurrentDevice;
@property (readonly, retain, nonatomic) id<MKFUser> user;
@property (readonly, copy, nonatomic) MKFUserSettingsAnnounceDatabaseID *databaseID;
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

- (id)castIfUserSettingsAnnounce;

@end
