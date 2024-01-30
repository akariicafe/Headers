@protocol MTLDevice;

@interface VNMetalProcessingDevice : VNProcessingDevice {
    id<MTLDevice> _metalDevice;
}

+ (id)allDevices;

- (int)espressoDeviceID;
- (id)metalDevice;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMetalDevice:(id)a0;
- (BOOL)targetsGPU;
- (int)espressoEngine;
- (int)espressoStorageType;
- (unsigned long long)hash;

@end
