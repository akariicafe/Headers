@class NSArray, NSUUID, NSString, NSNumber;

@interface HMDMediaDestinationControllerModel : HMDBackingStoreModelObject <HMFLogging>

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
