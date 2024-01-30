@class NSUUID, NSArray;

@interface HMMutableMediaDestinationControllerData : HMMediaDestinationControllerData

@property (copy) NSUUID *destinationIdentifier;
@property (copy) NSArray *availableDestinationIdentifiers;

+ (id)logCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
