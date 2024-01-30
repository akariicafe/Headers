@class NSArray, MLCDeviceCPU;

@interface _MLCCPULayer : NSObject

@property (readonly, nonatomic) MLCDeviceCPU *device;
@property (nonatomic) void **filter;
@property (nonatomic) void **secondaryFilter;
@property (retain, nonatomic) NSArray *deviceOps;

+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensors:(id)a3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDevice:(id)a0 deviceOps:(id)a1;

@end
