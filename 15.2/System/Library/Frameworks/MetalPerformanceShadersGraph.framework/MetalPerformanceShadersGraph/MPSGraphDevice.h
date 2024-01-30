@class NSString;
@protocol MTLDevice;

@interface MPSGraphDevice : NSObject {
    id<MTLDevice> _mtlDevice;
}

@property (readonly, nonatomic) NSString *metalDeviceName;
@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) id<MTLDevice> metalDevice;

+ (void)initialize;
+ (id)deviceWithMTLDevice:(id)a0;
+ (id)ANEDevice;
+ (id)CPUDevice;

- (void).cxx_destruct;
- (long long)gpuCoreCount;
- (id)initWithDeviceType:(unsigned int)a0 metalDevice:(id)a1;

@end
