@class NSString, NSArray, NSNumber, NSObject;
@protocol OS_dispatch_group;

@interface HMDServiceTransaction : HMDBackingStoreModelObject

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

- (void).cxx_destruct;

@end
