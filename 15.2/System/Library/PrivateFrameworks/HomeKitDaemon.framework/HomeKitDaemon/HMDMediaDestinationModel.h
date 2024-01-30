@class NSString, NSNumber, NSUUID;

@interface HMDMediaDestinationModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable, HMFLogging>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSNumber *type;
@property (retain) NSNumber *supportedOptions;
@property (retain) NSUUID *audioGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)properties;

- (id)attributeDescriptions;
- (id)privateDescription;
- (id)logIdentifier;
- (id)initWithDestination:(id)a0 changeType:(unsigned long long)a1;

@end
