@class NSUUID, NSDate, NSArray, _MKFAccessory, NSString, MKFBulletinRegistrationCameraSignificantEventDatabaseID, Protocol, NSNumber;
@protocol MKFAccessory, MKFDevice;

@interface _MKFBulletinRegistrationCameraSignificantEvent : _MKFBulletinRegistration <MKFBulletinRegistrationCameraSignificantEvent, MKFBulletinRegistrationCameraSignificantEventPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSNumber *notificationModes;
@property (copy, nonatomic) NSNumber *personFamiliarityOptions;
@property (copy, nonatomic) NSNumber *significantEventTypes;
@property (retain, nonatomic) _MKFAccessory *accessory;
@property (copy, nonatomic) NSNumber *notificationModes;
@property (copy, nonatomic) NSNumber *personFamiliarityOptions;
@property (copy, nonatomic) NSNumber *significantEventTypes;
@property (retain, nonatomic) id<MKFAccessory> accessory;
@property (readonly, copy, nonatomic) MKFBulletinRegistrationCameraSignificantEventDatabaseID *databaseID;
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

- (id)castIfBulletinRegistrationCameraSignificantEvent;

@end
