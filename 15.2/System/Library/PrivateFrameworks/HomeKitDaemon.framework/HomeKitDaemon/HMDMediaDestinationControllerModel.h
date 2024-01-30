@class NSString, NSArray, NSUUID, NSNumber;

@interface HMDMediaDestinationControllerModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable, HMFLogging>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSArray *availableDestinationModelIdentifierStrings;
@property (retain) NSNumber *type;
@property (retain) NSArray *availableDestinationModelIdentifiers;
@property (retain) NSUUID *destinationModelIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)properties;

- (id)attributeDescriptions;
- (id)privateDescription;
- (id)logIdentifier;
- (id)initWithData:(id)a0 changeType:(unsigned long long)a1;

@end
