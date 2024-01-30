@class Protocol, NSUUID, NSString, NSPredicate, NSDate, _MKFHome, MKFRemovedUserAccessCodeDatabaseID;
@protocol MKFHome;

@interface _MKFRemovedUserAccessCode : _MKFHomeAccessCode <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFRemovedUserAccessCode, MKFRemovedUserAccessCodePrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *dateRemoved;
@property (copy, nonatomic) NSUUID *hh2ModelID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSUUID *userModelID;
@property (copy, nonatomic) NSString *userName;
@property (retain, nonatomic) _MKFHome *home;
@property (copy, nonatomic) NSDate *dateRemoved;
@property (copy, nonatomic) NSUUID *hh2ModelID;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSUUID *userModelID;
@property (copy, nonatomic) NSString *userName;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, copy, nonatomic) MKFRemovedUserAccessCodeDatabaseID *databaseID;
@property (copy, nonatomic) NSString *accessCode;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)castIfRemovedUserAccessCode;

@end
