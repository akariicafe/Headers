@class NSString, NSNumber;

@interface HMDAccessoryNetworkProtectionGroupModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *manufacturer;
@property (retain, nonatomic) NSNumber *category;
@property (retain, nonatomic) NSNumber *targetProtectionMode;

+ (id)properties;
+ (id)modelIDForHome:(id)a0 manufacturer:(id)a1 category:(id)a2;
+ (id)modelNamespace;

@end
