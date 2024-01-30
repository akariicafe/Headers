@class NSData, MLCTensorDescriptor, MLCTensorData;
@protocol MTLBuffer;

@interface MLCCustomLayerTensor : NSObject <NSCopying>

@property (retain, nonatomic) NSData *cpuBuffer;
@property (retain, nonatomic) id gpuBuffer;
@property (readonly, retain, nonatomic) MLCTensorDescriptor *descriptor;
@property (readonly, nonatomic) MLCTensorData *hostData;
@property (readonly, nonatomic) id<MTLBuffer> metalBuffer;

+ (id)customLayerTensorWithDescriptor:(id)a0 gpuBuffer:(id)a1;
+ (id)customLayerTensorWithDescriptor:(id)a0 cpuBuffer:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithTensorDescriptor:(id)a0 cpuBuffer:(id)a1 gpuBuffer:(id)a2;

@end
