@interface VNProcessingDevice : NSObject <NSCopying>

+ (id)allDevices;
+ (id)defaultDevice;
+ (void)_lockStaticObjectsAccessLock;
+ (void)_unlockStaticObjectsAccessLock;
+ (id)defaultCPUDevice;
+ (id)defaultMetalDevice;
+ (id)deviceForMetalDevice:(id)a0;
+ (id)directANEDevice;
+ (void)forcedCleanup;
+ (id)defaultANEDevice;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)metalDevice;
- (int)espressoEngine;
- (BOOL)targetsANE;
- (BOOL)targetsCPU;
- (BOOL)targetsGPU;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (int)espressoDeviceID;
- (int)espressoStorageType;

@end
