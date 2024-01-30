@class NSString, GCGenericDevicePhysicalInputModel, GCGenericDeviceDriverModel;

@interface GCGenericDeviceModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *productCategory;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) GCGenericDeviceDriverModel *driver;
@property (copy, nonatomic) GCGenericDevicePhysicalInputModel *physicalInput;

- (id)build;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)initializeWithModel:(id)a0;

@end
