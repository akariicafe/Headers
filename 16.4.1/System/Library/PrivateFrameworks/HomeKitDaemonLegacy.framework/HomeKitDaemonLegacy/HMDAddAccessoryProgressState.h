@class NSUUID, NSString, HMAccessoryCategory;

@interface HMDAddAccessoryProgressState : HMFObject

@property (readonly, nonatomic) NSUUID *accessoryUUID;
@property (readonly, nonatomic) NSString *accessoryName;
@property (readonly, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) HMAccessoryCategory *category;
@property (readonly, nonatomic) unsigned long long certificationStatus;
@property (readonly, nonatomic) NSString *productData;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 accessoryName:(id)a1 manufacturerName:(id)a2 category:(id)a3 certificationStatus:(unsigned long long)a4 productData:(id)a5;

@end
