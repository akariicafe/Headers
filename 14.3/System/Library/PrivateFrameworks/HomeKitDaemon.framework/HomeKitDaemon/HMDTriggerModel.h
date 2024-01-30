@class NSString, NSArray, HMDUser, NSDate, NSNumber, HMDDevice;

@interface HMDTriggerModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *currentActionSets;
@property (copy, nonatomic) NSNumber *active;
@property (copy, nonatomic) NSDate *mostRecentFireDate;
@property (retain, nonatomic) HMDUser *owner;
@property (retain, nonatomic) HMDDevice *owningDevice;

+ (id)properties;

- (id)createPayload;
- (id)dependentUUIDs;

@end
