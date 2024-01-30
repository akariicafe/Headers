@interface MLCGPUHelper : NSObject

+ (void)synchronizeResource:(id)a0 commandBuffer:(id)a1;
+ (unsigned long long)mtlStorageMode;
+ (unsigned long long)mtlResourceOptions;
+ (void)didModifyRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 buffer:(id)a1;
+ (void)concatChannelsForwardWithParams:(struct ConcatParams { unsigned short x0; unsigned short x1; unsigned short x2; })a0 sourceImageBatch:(id)a1 resultImageBatch:(id)a2 commandBuffer:(id)a3 device:(id)a4 deviceIndex:(unsigned long long)a5;
+ (void)copyMPSImageBatchToMatrixBatch:(id)a0 commandBuffer:(id)a1 sourceImageBatch:(id)a2 destinationMatrixBatch:(id)a3;
+ (void)copyMatrixBatchToMPSImageBatch:(id)a0 commandBuffer:(id)a1 sourceMatrixBatch:(id)a2 destinationImageBatch:(id)a3;

@end
