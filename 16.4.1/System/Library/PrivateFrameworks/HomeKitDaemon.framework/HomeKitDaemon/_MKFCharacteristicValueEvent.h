@class Protocol, NSUUID, NSString, MKFCharacteristicValueEventDatabaseID, NSDate, NSObject, NSNumber;
@protocol MKFHome, MKFService, MKFEventTrigger;

@interface _MKFCharacteristicValueEvent : _MKFCharacteristicEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCharacteristicValueEvent, MKFCharacteristicValueEventPrivateExtensions>

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
@property (readonly, copy, nonatomic) MKFCharacteristicValueEventDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (copy, nonatomic) NSNumber *characteristicID;
@property (retain, nonatomic) id<MKFService> service;
@property (copy, nonatomic) NSNumber *endEvent;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFEventTrigger> trigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfCharacteristicValueEvent;
- (BOOL)validateEventValue:(id *)a0 error:(id *)a1;

@end
