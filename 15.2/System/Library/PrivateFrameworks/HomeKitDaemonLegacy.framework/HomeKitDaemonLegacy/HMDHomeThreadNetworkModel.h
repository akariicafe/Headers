@class NSString;

@interface HMDHomeThreadNetworkModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSString *threadNetworkID;

+ (id)properties;
+ (id)modelIDForHome:(id)a0;
+ (id)defaultModelForHome:(id)a0;

@end
