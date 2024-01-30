@class NSUUID, NSString, NSDate, _MKFService, MKFCharacteristicWriteActionDatabaseID, Protocol, NSObject, _MKFHAPAccessory, NSNumber;
@protocol MKFActionSet, MKFHAPAccessory, MKFHome, MKFService;

@interface _MKFCharacteristicWriteAction : _MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFCharacteristicWriteAction, MKFCharacteristicWriteActionPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *characteristicID;
@property (retain, nonatomic) NSObject *targetValue;
@property (retain, nonatomic) _MKFHAPAccessory *accessory;
@property (retain, nonatomic) _MKFService *service;
@property (copy, nonatomic) NSNumber *characteristicID;
@property (retain, nonatomic) NSObject *targetValue;
@property (retain, nonatomic) id<MKFHAPAccessory> accessory;
@property (retain, nonatomic) id<MKFService> service;
@property (readonly, copy, nonatomic) MKFCharacteristicWriteActionDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFActionSet> actionSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (void)willSave;
- (id)castIfCharacteristicWriteAction;
- (BOOL)validateForInsertOrUpdate:(id *)a0;
- (BOOL)validateTargetValue:(id *)a0 error:(id *)a1;

@end
