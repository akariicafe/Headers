@protocol MTLDevice;

@interface VNMetalProcessingDevice : VNProcessingDevice {
    id<MTLDevice> _metalDevice;
}

+ (id)allDevices;

- (void).cxx_destruct;
- (id)metalDevice;
- (int)espressoEngine;
- (BOOL)targetsGPU;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (int)espressoDeviceID;
- (int)espressoStorageType;
- (id)initWithMetalDevice:(id)a0;

@end
