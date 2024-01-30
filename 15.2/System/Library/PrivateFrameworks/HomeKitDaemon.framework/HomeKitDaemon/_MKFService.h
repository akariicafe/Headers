@class NSUUID, NSString, NSArray, NSPredicate, _MKFAccessoryHAP, NSSet, _MKFApplicationData, MKFServiceDatabaseID, Protocol, NSDate, NSNumber;
@protocol MKFAccessoryHAP, MKFApplicationData, MKFHome;

@interface _MKFService : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFService, MKFServicePrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *associatedServiceType;
@property (copy, nonatomic) NSNumber *configurationState;
@property (copy, nonatomic) NSString *expectedConfiguredName;
@property (copy, nonatomic) NSNumber *instanceID;
@property (copy, nonatomic) NSNumber *labelIndex;
@property (copy, nonatomic) NSNumber *labelNamespace;
@property (copy, nonatomic) NSNumber *lastKnownDiscoveryMode;
@property (copy, nonatomic) NSNumber *lastKnownOperatingState;
@property (copy, nonatomic) NSNumber *lastKnownOperatingStateAbnormalReasons;
@property (retain, nonatomic) NSArray *linkedServices;
@property (retain, nonatomic) NSArray *mediaSourceDisplayOrder;
@property (nonatomic) long long mediaSourceIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *providedName;
@property (copy, nonatomic) NSNumber *serviceProperties;
@property (copy, nonatomic) NSString *serviceSubtype;
@property (copy, nonatomic) NSString *serviceType;
@property (retain, nonatomic) _MKFAccessoryHAP *accessory;
@property (retain, nonatomic) NSSet *actionCharacteristicWrites_;
@property (retain, nonatomic) _MKFApplicationData *applicationData;
@property (retain, nonatomic) NSSet *characteristics_;
@property (retain, nonatomic) NSSet *eventCharacteristics_;
@property (retain, nonatomic) NSSet *serviceGroups_;
@property (copy, nonatomic) NSString *associatedServiceType;
@property (copy, nonatomic) NSNumber *configurationState;
@property (copy, nonatomic) NSString *expectedConfiguredName;
@property (readonly, copy, nonatomic) NSNumber *instanceID;
@property (copy, nonatomic) NSNumber *labelIndex;
@property (copy, nonatomic) NSNumber *labelNamespace;
@property (copy, nonatomic) NSNumber *lastKnownDiscoveryMode;
@property (copy, nonatomic) NSNumber *lastKnownOperatingState;
@property (copy, nonatomic) NSNumber *lastKnownOperatingStateAbnormalReasons;
@property (retain, nonatomic) NSArray *linkedServices;
@property (retain, nonatomic) NSArray *mediaSourceDisplayOrder;
@property (copy, nonatomic) NSNumber *mediaSourceIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *providedName;
@property (copy, nonatomic) NSNumber *serviceProperties;
@property (copy, nonatomic) NSString *serviceSubtype;
@property (copy, nonatomic) NSString *serviceType;
@property (readonly, retain, nonatomic) id<MKFAccessoryHAP> accessory;
@property (readonly, retain, nonatomic) NSArray *actionCharacteristicWrites;
@property (retain, nonatomic) id<MKFApplicationData> applicationData;
@property (retain, nonatomic) NSArray *characteristics;
@property (readonly, retain, nonatomic) NSArray *eventCharacteristics;
@property (readonly, retain, nonatomic) NSArray *serviceGroups;
@property (readonly, copy, nonatomic) MKFServiceDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (Class)backingModelClass;
+ (id)modelIDForKeyAttribute:(id)a0 parent:(id)a1;

@end
