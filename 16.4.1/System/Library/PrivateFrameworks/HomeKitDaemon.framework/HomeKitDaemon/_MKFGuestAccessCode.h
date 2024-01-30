@class NSUUID, NSString, NSDate, NSPredicate, MKFGuestAccessCodeDatabaseID, Protocol, _MKFHome, NSNumber;
@protocol MKFHome;

@interface _MKFGuestAccessCode : _MKFHomeAccessCode <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFGuestAccessCode, MKFGuestAccessCodePrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSUUID *hh2ModelID;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *userUniqueIDForAccessories;
@property (retain, nonatomic) _MKFHome *home;
@property (copy, nonatomic) NSUUID *hh2ModelID;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSNumber *userUniqueIDForAccessories;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, copy, nonatomic) MKFGuestAccessCodeDatabaseID *databaseID;
@property (copy, nonatomic) NSString *accessCode;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)castIfGuestAccessCode;

@end
