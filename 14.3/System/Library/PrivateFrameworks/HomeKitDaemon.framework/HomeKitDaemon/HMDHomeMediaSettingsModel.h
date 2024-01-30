@class NSNumber, NSString;

@interface HMDHomeMediaSettingsModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSNumber *minimumMediaUserPrivilege;
@property (copy, nonatomic) NSNumber *mediaPeerToPeerEnabled;
@property (copy, nonatomic) NSString *mediaPassword;

+ (id)properties;
+ (id)modelIDForHome:(id)a0;
+ (id)defaultModelForHome:(id)a0;
+ (id)modelNamespace;

@end
