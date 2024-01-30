@protocol MTLDevice;

@interface VNMetalProcessingDevice : VNProcessingDevice {
    id<MTLDevice> _metalDevice;
}

+ (id)allDevices;

- (int)espressoStorageType;
- (int)espressoDeviceID;
- (int)espressoEngine;
- (BOOL)isEqual:(id)a0;
- (id)initWithMetalDevice:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)metalDevice;
- (BOOL)targetsGPU;
- (void).cxx_destruct;

@end
