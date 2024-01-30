@interface VCPHumanPoseEspressoSession : NSObject {
    void /* unknown type, blank encoding */ *_heatmapNms;
    int _width;
    int _height;
    int _revision;
    void /* unknown type, blank encoding */ *_modelOutput16bit;
    int _modelOutputSize;
    BOOL _loadModel;
    void *_plan;
    void *_ctx;
    struct { void *plan; int network_index; } _net;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _outputBlob;
}

- (void)dealloc;
- (id)initWithOptions:(id)a0;
- (int)keypointsFromTensor:(void /* unknown type, blank encoding */ *)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 channels:(unsigned long long)a3 withOptions:(id)a4 results:(id)a5;
- (int)keypointsFromTensor:(struct { void *x0; void *x1; unsigned long long x2[4]; unsigned long long x3[4]; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; int x14; } *)a0 withOptions:(id)a1 results:(id)a2;
- (id)keypointsToObservation:(id)a0;
- (int)processFrame:(struct __CVBuffer { } *)a0 withOptions:(id)a1 results:(id)a2;
- (int)requiredInputFormat:(int *)a0 height:(int *)a1 format:(unsigned int *)a2;

@end
