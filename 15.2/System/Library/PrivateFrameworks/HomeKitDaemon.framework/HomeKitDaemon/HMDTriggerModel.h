@class NSString, NSArray, HMDUser, NSDate, NSNumber, HMDDevice;

@interface HMDTriggerModel : HMDBackingStoreModelObject <HMDBackingStoreModelObjectCDRepresentable>

@property (class, readonly) Class cd_entityClass;
@property (class, readonly) NSString *cd_parentReferenceName;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *configuredName;
@property (retain, nonatomic) NSArray *currentActionSets;
@property (copy, nonatomic) NSNumber *active;
@property (copy, nonatomic) NSDate *mostRecentFireDate;
@property (retain, nonatomic) HMDUser *owner;
@property (retain, nonatomic) HMDDevice *owningDevice;
@property (retain, nonatomic) NSNumber *autoDelete;

+ (id)properties;

@end
