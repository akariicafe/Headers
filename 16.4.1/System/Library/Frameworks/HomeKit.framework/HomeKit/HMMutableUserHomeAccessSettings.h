@class NSSet, HMUserHomeAccessSchedule;

@interface HMMutableUserHomeAccessSettings : HMUserHomeAccessSettings

@property (getter=isAccessAllowedToAllAccessories) BOOL accessAllowedToAllAccessories;
@property (copy) NSSet *allowedAccessoryIdentifiers;
@property (copy) NSSet *allowedAccessoryCategoryTypes;
@property (copy) NSSet *allowedRoomIdentifiers;
@property (copy) HMUserHomeAccessSchedule *schedule;

@end
