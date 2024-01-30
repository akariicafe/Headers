@interface VNProcessingDevice : NSObject <NSCopying>

+ (id)allDevices;
+ (void)_lockStaticObjectsAccessLock;
+ (id)deviceForMetalDevice:(id)a0;
+ (id)defaultCPUDevice;
+ (id)defaultANEDevice;
+ (id)defaultMetalDevice;
+ (id)directANEDevice;
+ (void)_unlockStaticObjectsAccessLock;
+ (void)forcedCleanup;
+ (id)defaultDevice;

- (int)espressoStorageType;
- (int)espressoDeviceID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)espressoEngine;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)metalDevice;
- (BOOL)targetsGPU;
- (BOOL)targetsCPU;
- (BOOL)targetsANE;

@end
