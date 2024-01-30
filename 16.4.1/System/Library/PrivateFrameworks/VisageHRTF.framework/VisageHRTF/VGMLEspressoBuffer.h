@class NSString;

@interface VGMLEspressoBuffer : NSObject {
    struct { void *x0; int x1; } *_network;
    NSString *_layerName;
    unsigned long long _dimensions[5];
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _buffer;
    int _mode;
}

- (const void *)getData;
- (void).cxx_destruct;
- (unsigned long long)getSize;
- (BOOL)bindIOSurface:(id)a0;
- (BOOL)bindImage:(struct __CVBuffer { } *)a0;
- (BOOL)bindManagedBuffer;
- (BOOL)bindTensor:(id)a0;
- (BOOL)checkBufferAndIOSurfaceConsistency:(id)a0;
- (BOOL)copyBufferIntoIOSurface:(id)a0;
- (const unsigned long long *)getDimensions;
- (id)initWithNetwork:(struct { void *x0; int x1; } *)a0 withLayerName:(id)a1 withMode:(int)a2;

@end
