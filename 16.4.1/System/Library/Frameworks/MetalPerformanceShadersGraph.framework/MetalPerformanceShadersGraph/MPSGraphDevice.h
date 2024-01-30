@class NSString;
@protocol MTLDevice;

@interface MPSGraphDevice : NSObject {
    id<MTLDevice> _mtlDevice;
}

@property (readonly, nonatomic) NSString *metalDeviceName;
@property (readonly, nonatomic) long long gpuCoreCount;
@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) id<MTLDevice> metalDevice;

+ (void)initialize;
+ (id)CPUDevice;
+ (id)ANEDevice;
+ (id)deviceWithMTLDevice:(id)a0;

- (void).cxx_destruct;
- (id)initWithDeviceType:(unsigned int)a0 metalDevice:(id)a1;

@end
