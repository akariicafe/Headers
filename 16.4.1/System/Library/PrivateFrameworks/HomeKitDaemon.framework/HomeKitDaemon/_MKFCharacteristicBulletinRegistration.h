@class Protocol, _MKFCharacteristic, NSString, NSUUID, NSDate, MKFCharacteristicBulletinRegistrationDatabaseID, NSArray;
@protocol MKFHome, MKFCharacteristic, MKFUser;

@interface _MKFCharacteristicBulletinRegistration : _MKFBulletinRegistration <MKFCharacteristicBulletinRegistration, MKFCharacteristicBulletinRegistrationPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) _MKFCharacteristic *characteristic;
@property (retain, nonatomic) id<MKFCharacteristic> characteristic;
@property (readonly, copy, nonatomic) MKFCharacteristicBulletinRegistrationDatabaseID *databaseID;
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

- (id)castIfCharacteristicBulletinRegistration;

@end
