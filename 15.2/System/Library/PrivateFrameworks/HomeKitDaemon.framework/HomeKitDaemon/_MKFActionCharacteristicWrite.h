@class NSUUID, NSString, MKFActionCharacteristicWriteDatabaseID, NSDate, _MKFAccessoryHAP, _MKFService, Protocol, NSObject, NSNumber;
@protocol MKFAccessoryHAP, MKFActionSet, MKFHome, MKFService;

@interface _MKFActionCharacteristicWrite : _MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFActionCharacteristicWrite, MKFActionCharacteristicWritePrivateExtensions>

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
@property (retain, nonatomic) _MKFAccessoryHAP *accessory;
@property (retain, nonatomic) _MKFService *service;
@property (copy, nonatomic) NSNumber *characteristicID;
@property (retain, nonatomic) NSObject *targetValue;
@property (retain, nonatomic) id<MKFAccessoryHAP> accessory;
@property (retain, nonatomic) id<MKFService> service;
@property (readonly, copy, nonatomic) MKFActionCharacteristicWriteDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly, retain, nonatomic) id<MKFActionSet> actionSet;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;
+ (Class)backingModelClass;

- (id)castIfActionCharacteristicWrite;

@end
