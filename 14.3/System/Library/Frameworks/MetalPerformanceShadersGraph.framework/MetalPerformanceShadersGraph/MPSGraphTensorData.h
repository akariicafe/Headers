@class NSArray, NSData, MPSGraphDevice, MPSNDArray;

@interface MPSGraphTensorData : NSObject {
    MPSNDArray *_mpsndarray;
    NSArray *_mpsimagebatch;
    NSData *_data;
    long long _layout;
}

@property (readonly, copy, nonatomic) NSArray *shape;
@property (readonly, nonatomic) unsigned int dataType;
@property (readonly, nonatomic) MPSGraphDevice *device;

- (void).cxx_destruct;
- (void)printNDArray;
- (id)checkNDArray:(float *)a0 nativeUlps:(float)a1 absoluteErr:(float)a2;
- (id)mpsndarray;
- (id)initWithDevice:(id)a0 data:(id)a1 shape:(id)a2 dataType:(unsigned int)a3;
- (id)initWithMTLBuffer:(id)a0 shape:(id)a1 dataType:(unsigned int)a2;
- (id)initWithMPSMatrix:(id)a0 rank:(unsigned long long)a1;
- (id)initWithMPSMatrix:(id)a0;
- (id)initWithMPSVector:(id)a0;
- (id)initWithMPSVector:(id)a0 rank:(unsigned long long)a1;
- (id)initWithMPSNDArray:(id)a0;
- (id)initWithMPSImageBatch:(id)a0;

@end
