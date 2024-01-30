@class NSUUID, NSArray, NSString, HMFProductInfo, HMDHomeKitVersion, HMDRPIdentity;

@interface HMDDeviceModel : HMDBackingStoreModelObject

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSArray *handles;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) HMDHomeKitVersion *version;
@property (copy, nonatomic) HMFProductInfo *productInfo;
@property (copy, nonatomic) HMDRPIdentity *rpIdentity;
@property (readonly, nonatomic) NSArray *deviceHandles;

+ (id)properties;
+ (id)schemaHashRoot;

- (BOOL)diff:(id)a0 differingFields:(id *)a1;

@end
