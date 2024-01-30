@class NSUUID, NSDate, NSArray, NSString, NSSet, _MKFDevice, Protocol, MKFBulletinRegistrationDatabaseID;
@protocol MKFDevice;

@interface _MKFBulletinRegistration : _MKFModel <MKFBulletinRegistration, MKFBulletinRegistrationPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) NSSet *conditions_;
@property (retain, nonatomic) _MKFDevice *device;
@property (readonly, retain, nonatomic) NSArray *conditions;
@property (readonly, retain, nonatomic) id<MKFDevice> device;
@property (readonly, copy, nonatomic) MKFBulletinRegistrationDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfBulletinRegistration;
- (id)materializeOrCreateConditionsRelationOfTypeBulletinConditionTimePeriodWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateConditionsRelationOfTypeBulletinConditionPresenceWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateConditionsRelationOfType:(id)a0 modelID:(id)a1 createdNew:(BOOL *)a2;
- (id)findConditionsRelationOfTypeBulletinConditionPresenceWithModelID:(id)a0;
- (id)findConditionsRelationOfTypeBulletinConditionTimePeriodWithModelID:(id)a0;
- (void)addConditionsObject:(id)a0;
- (void)removeConditionsObject:(id)a0;
- (id)materializeOrCreateDeviceRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)findDeviceRelationWithModelID:(id)a0;
- (void)addDeviceObject:(id)a0;
- (void)removeDeviceObject:(id)a0;

@end
