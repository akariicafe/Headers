@class TPSCloudDeviceInfo;
@protocol TPSCloudDeviceDataSource;

@interface TPSCloudDeviceValidation : TPSTargetingValidation

@property (retain, nonatomic) TPSCloudDeviceInfo *deviceInfo;
@property (weak, nonatomic) id<TPSCloudDeviceDataSource> dataSource;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDeviceInfo:(id)a0;
- (void)validateWithCompletion:(id /* block */)a0;

@end
