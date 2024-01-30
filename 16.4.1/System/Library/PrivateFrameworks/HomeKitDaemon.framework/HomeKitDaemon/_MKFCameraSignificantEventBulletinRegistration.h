@class NSUUID, NSString, MKFCameraSignificantEventBulletinRegistrationDatabaseID, _MKFAccessory, NSDate, NSArray, Protocol, NSNumber;
@protocol MKFHome, MKFAccessory, MKFUser;

@interface _MKFCameraSignificantEventBulletinRegistration : _MKFBulletinRegistration <MKFCameraSignificantEventBulletinRegistration, MKFCameraSignificantEventBulletinRegistrationPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSNumber *notificationModes;
@property (copy, nonatomic) NSNumber *personFamiliarityOptions;
@property (copy, nonatomic) NSNumber *significantEventTypes;
@property (retain, nonatomic) _MKFAccessory *accessory;
@property (copy, nonatomic) NSNumber *notificationModes;
@property (copy, nonatomic) NSNumber *personFamiliarityOptions;
@property (copy, nonatomic) NSNumber *significantEventTypes;
@property (retain, nonatomic) id<MKFAccessory> accessory;
@property (readonly, copy, nonatomic) MKFCameraSignificantEventBulletinRegistrationDatabaseID *databaseID;
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

- (id)castIfCameraSignificantEventBulletinRegistration;
- (BOOL)validateForInsertOrUpdate:(id *)a0;

@end
