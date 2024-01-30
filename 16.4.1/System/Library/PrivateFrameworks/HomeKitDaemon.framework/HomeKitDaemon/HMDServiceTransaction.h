@class NSString, NSArray, NSNumber, NSObject;
@protocol OS_dispatch_group;

@interface HMDServiceTransaction : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *instanceID;
@property (retain, nonatomic) NSString *lastSeenConfiguredNameLocal;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *providedName;
@property (retain, nonatomic) NSString *expectedConfiguredName;
@property (retain, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSString *associatedServiceType;
@property (retain, nonatomic) NSString *serviceSubtype;
@property (retain, nonatomic) NSNumber *labelIndex;
@property (retain, nonatomic) NSNumber *labelNamespace;
@property (retain, nonatomic) NSNumber *configurationState;
@property (retain, nonatomic) NSArray *linkedServices;
@property (retain, nonatomic) NSNumber *lastKnownDiscoveryMode;
@property (retain, nonatomic) NSNumber *lastKnownOperatingState;
@property (retain, nonatomic) NSNumber *lastKnownOperatingStateAbnormalReasons;
@property (retain, nonatomic) NSNumber *mediaSourceIdentifier;
@property (retain, nonatomic) NSArray *mediaSourceDisplayOrder;
@property (retain, nonatomic) NSNumber *serviceProperties;
@property (retain, nonatomic) NSArray *characteristics;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *configurationTracker;
@property (retain, nonatomic) NSNumber *hidden;
@property (retain, nonatomic) NSNumber *primary;

+ (id)properties;
+ (id)cd_createMKFCharacteristicFromDictionary:(id)a0 context:(id)a1;
+ (id)cd_modelTypeForCharacteristicFormat:(id)a0;

@end
