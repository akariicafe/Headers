@class Protocol, NSUUID, NSString, NSNumber, NSDate, NSObject, MKFCharacteristicRangeEventDatabaseID;
@protocol MKFHome, MKFService, MKFEventTrigger;

@interface _MKFCharacteristicRangeEvent : _MKFCharacteristicEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCharacteristicRangeEvent, MKFCharacteristicRangeEventPrivateExtensions>

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
@property (readonly, copy, nonatomic) MKFCharacteristicRangeEventDatabaseID *databaseID;
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

- (id)castIfCharacteristicRangeEvent;
- (BOOL)validateForInsertOrUpdate:(id *)a0;
- (BOOL)validateMax:(id *)a0 error:(id *)a1;
- (BOOL)validateMin:(id *)a0 error:(id *)a1;

@end
