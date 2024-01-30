@class NSString, NSArray;

@interface HMDServiceGroupModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *services;

+ (id)properties;

- (id)dependentUUIDs;

@end
