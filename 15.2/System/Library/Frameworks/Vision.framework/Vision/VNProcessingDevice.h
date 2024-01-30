@interface VNProcessingDevice : NSObject <NSCopying>

+ (id)defaultDevice;
+ (void)forcedCleanup;
+ (id)allDevices;
+ (id)defaultANEDevice;
+ (void)_lockStaticObjectsAccessLock;
+ (void)_unlockStaticObjectsAccessLock;
+ (id)defaultCPUDevice;
+ (id)defaultMetalDevice;
+ (id)deviceForMetalDevice:(id)a0;
+ (id)directANEDevice;

- (int)espressoDeviceID;
- (id)metalDevice;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)targetsGPU;
- (int)espressoEngine;
- (int)espressoStorageType;
- (unsigned long long)hash;
- (BOOL)targetsCPU;
- (BOOL)targetsANE;

@end
