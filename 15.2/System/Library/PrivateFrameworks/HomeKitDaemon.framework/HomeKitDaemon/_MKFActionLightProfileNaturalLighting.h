@class NSUUID, NSString, NSDate, NSSet, _MKFAccessoryHAP, Protocol, MKFActionLightProfileNaturalLightingDatabaseID, NSNumber;
@protocol MKFAccessoryHAP, MKFHome, MKFActionSet;

@interface _MKFActionLightProfileNaturalLighting : _MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFActionLightProfileNaturalLighting, MKFActionLightProfileNaturalLightingPrivateExtensions>

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
@property (retain, nonatomic) _MKFAccessoryHAP *accessory;
@property (copy, nonatomic) NSUUID *lightProfileUUID;
@property (copy, nonatomic) NSNumber *naturalLightingEnabledField;
@property (retain, nonatomic) NSSet *serviceUUIDs;
@property (retain, nonatomic) id<MKFAccessoryHAP> accessory;
@property (readonly, copy, nonatomic) MKFActionLightProfileNaturalLightingDatabaseID *databaseID;
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

- (id)castIfActionLightProfileNaturalLighting;

@end
