@class Protocol, NSUUID, NSString, NSNumber, NSDate, NSObject, MKFEventCharacteristicThresholdRangeDatabaseID;
@protocol MKFHome, MKFService, MKFTriggerEvent;

@interface _MKFEventCharacteristicThresholdRange : _MKFEventCharacteristic <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFEventCharacteristicThresholdRange, MKFEventCharacteristicThresholdRangePrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject *max;
@property (retain, nonatomic) NSObject *min;
@property (retain, nonatomic) NSObject *max;
@property (retain, nonatomic) NSObject *min;
@property (readonly, copy, nonatomic) MKFEventCharacteristicThresholdRangeDatabaseID *databaseID;
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

- (id)castIfEventCharacteristicThresholdRange;
- (BOOL)validateForInsertOrUpdate:(id *)a0;

@end
