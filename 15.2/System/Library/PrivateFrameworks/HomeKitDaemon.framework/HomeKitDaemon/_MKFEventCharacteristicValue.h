@class Protocol, NSUUID, NSString, NSDate, MKFEventCharacteristicValueDatabaseID, NSObject, NSNumber;
@protocol MKFHome, MKFService, MKFTriggerEvent;

@interface _MKFEventCharacteristicValue : _MKFEventCharacteristic <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFEventCharacteristicValue, MKFEventCharacteristicValuePrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject *eventValue;
@property (retain, nonatomic) NSObject *eventValue;
@property (readonly, copy, nonatomic) MKFEventCharacteristicValueDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (copy, nonatomic) NSNumber *characteristicID;
@property (retain, nonatomic) id<MKFService> service;
@property (copy, nonatomic) NSNumber *endEvent;
@property (readonly, retain, nonatomic) id<MKFTriggerEvent> trigger;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfEventCharacteristicValue;

@end
