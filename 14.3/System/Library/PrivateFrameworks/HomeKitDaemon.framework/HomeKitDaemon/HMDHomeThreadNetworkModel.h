@class NSString;

@interface HMDHomeThreadNetworkModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSString *threadNetworkID;

+ (id)properties;
+ (id)modelIDForHome:(id)a0;
+ (id)defaultModelForHome:(id)a0;

@end
