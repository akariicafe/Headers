@class NSArray;
@protocol MLComputeEngineControl, MLCLayerOperations, MLCDeviceProperties, MLComputeEngineOptimizerUpdate, MLCEngineDispatch;

@interface MLCDevice : NSObject <NSCopying>

@property (nonatomic) int type;
@property (retain, nonatomic) id<MLCDeviceProperties> engine;
@property (retain, nonatomic) id<MLComputeEngineControl, MLCLayerOperations, MLCEngineDispatch, MLComputeEngineOptimizerUpdate, MLCDeviceProperties> computeEngine;
@property (readonly, nonatomic) int actualDeviceType;
@property (readonly, nonatomic) NSArray *gpuDevices;

+ (id)deviceWithType:(int)a0;
+ (id)cpuDevice;
+ (id)gpuDevice;
+ (id)aneDevice;
+ (id)deviceWithType:(int)a0 selectsMultipleComputeDevices:(BOOL)a1;
+ (id)deviceWithGPUDevices:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToDevice:(id)a0;
- (unsigned long long)hash;
- (id)initWithType:(int)a0 selectsMultipleComputeDevices:(BOOL)a1;
- (id)initWithGPUs:(id)a0;
- (id)initWithType:(int)a0 engine:(id)a1;
- (void)switchToCPUDevice;

@end
