@class NSUUID, NSString, NSDate, MKFNaturalLightingActionDatabaseID, NSSet, Protocol, _MKFHAPAccessory, NSNumber;
@protocol MKFHome, MKFActionSet, MKFHAPAccessory;

@interface _MKFNaturalLightingAction : _MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFNaturalLightingAction, MKFNaturalLightingActionPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSUUID *lightProfileUUID;
@property (copy, nonatomic) NSNumber *naturalLightingEnabledField;
@property (retain, nonatomic) NSSet *serviceUUIDs;
@property (retain, nonatomic) _MKFHAPAccessory *accessory;
@property (copy, nonatomic) NSUUID *lightProfileUUID;
@property (copy, nonatomic) NSNumber *naturalLightingEnabledField;
@property (retain, nonatomic) NSSet *serviceUUIDs;
@property (retain, nonatomic) id<MKFHAPAccessory> accessory;
@property (readonly, copy, nonatomic) MKFNaturalLightingActionDatabaseID *databaseID;
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

- (id)castIfNaturalLightingAction;

@end
