@class Protocol, NSArray, NSUUID, MKFBulletinRegistrationCameraReachabilityDatabaseID, _MKFAccessory, NSDate, NSString;
@protocol MKFAccessory, MKFDevice;

@interface _MKFBulletinRegistrationCameraReachability : _MKFBulletinRegistration <MKFBulletinRegistrationCameraReachability, MKFBulletinRegistrationCameraReachabilityPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) _MKFAccessory *accessory;
@property (retain, nonatomic) id<MKFAccessory> accessory;
@property (readonly, copy, nonatomic) MKFBulletinRegistrationCameraReachabilityDatabaseID *databaseID;
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

- (id)castIfBulletinRegistrationCameraReachability;

@end
