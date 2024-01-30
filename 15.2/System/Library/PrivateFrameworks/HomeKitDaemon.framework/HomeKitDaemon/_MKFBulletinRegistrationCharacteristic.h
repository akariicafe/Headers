@class Protocol, _MKFCharacteristic, NSArray, NSUUID, NSDate, MKFBulletinRegistrationCharacteristicDatabaseID, NSString;
@protocol MKFCharacteristic, MKFDevice;

@interface _MKFBulletinRegistrationCharacteristic : _MKFBulletinRegistration <MKFBulletinRegistrationCharacteristic, MKFBulletinRegistrationCharacteristicPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) _MKFCharacteristic *characteristic;
@property (retain, nonatomic) id<MKFCharacteristic> characteristic;
@property (readonly, copy, nonatomic) MKFBulletinRegistrationCharacteristicDatabaseID *databaseID;
@property (readonly, retain, nonatomic) NSArray *conditions;
@property (readonly, retain, nonatomic) id<MKFDevice> device;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfBulletinRegistrationCharacteristic;

@end
