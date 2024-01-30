@class NSNumber, NSArray, NSString;

@interface HMDAssistantAccessControlModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSNumber *enabled;
@property (copy, nonatomic) NSNumber *options;
@property (copy, nonatomic) NSArray *accessoryModelIDs;
@property (retain, nonatomic) NSString *changeTag;

+ (id)properties;

- (id)dependentUUIDs;

@end
