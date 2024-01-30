@class Protocol, NSString, MKFCameraAccessModeBulletinRegistrationDatabaseID, _MKFAccessory, NSUUID, NSDate, NSArray;
@protocol MKFHome, MKFAccessory, MKFUser;

@interface _MKFCameraAccessModeBulletinRegistration : _MKFBulletinRegistration <MKFCameraAccessModeBulletinRegistration, MKFCameraAccessModeBulletinRegistrationPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) _MKFAccessory *accessory;
@property (retain, nonatomic) id<MKFAccessory> accessory;
@property (readonly, copy, nonatomic) MKFCameraAccessModeBulletinRegistrationDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (copy, nonatomic) NSString *deviceIdsDestination;
@property (copy, nonatomic) NSUUID *deviceIdsIdentifier;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSArray *conditions;
@property (readonly, retain, nonatomic) id<MKFUser> user;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfCameraAccessModeBulletinRegistration;
- (BOOL)validateForInsertOrUpdate:(id *)a0;

@end
