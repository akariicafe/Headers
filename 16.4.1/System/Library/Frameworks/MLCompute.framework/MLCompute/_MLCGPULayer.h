@class NSArray;

@interface _MLCGPULayer : NSObject

@property (retain, nonatomic) NSArray *deviceOps;

+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensor:(id)a3;
+ (BOOL)compileWithDevice:(id)a0 deviceOps:(id)a1 sourceTensors:(id)a2 resultTensors:(id)a3;

- (void).cxx_destruct;

@end
