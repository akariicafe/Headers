@class Protocol, NSUUID, NSString, NSDate, MKFCharacteristicEventDatabaseID, NSNumber, _MKFService;
@protocol MKFService, MKFHome, MKFEventTrigger;

@interface _MKFCharacteristicEvent : _MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCharacteristicEvent, MKFCharacteristicEventPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *characteristicID;
@property (retain, nonatomic) _MKFService *service;
@property (copy, nonatomic) NSNumber *characteristicID;
@property (retain, nonatomic) id<MKFService> service;
@property (readonly, copy, nonatomic) MKFCharacteristicEventDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
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

- (id)castIfCharacteristicEvent;
- (BOOL)validateForInsertOrUpdate:(id *)a0;

@end
