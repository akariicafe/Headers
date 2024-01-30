@interface ETImageDescriptorExtractor : NSObject {
    void *_plan;
    struct { void *plan; int network_index; } _net;
    void *_ctx;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _inputBlob;
    struct { void *data; void *reserved; unsigned long long dim[4]; unsigned long long stride[4]; unsigned long long width; unsigned long long height; unsigned long long channels; unsigned long long batch_number; unsigned long long sequence_length; unsigned long long stride_width; unsigned long long stride_height; unsigned long long stride_channels; unsigned long long stride_batch_number; unsigned long long stride_sequence_length; int storage_type; } _outputBlob;
    unsigned long long _targetWidth;
    unsigned long long _targetHeight;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *__data_; unsigned long long __size_; unsigned long long __cap_; } __l; struct __short { char __data_[23]; struct { unsigned char __size_; } ; } __s; struct __raw { unsigned long long __words[3]; } __r; } ; } __value_; } __r_; } _inputName;
    unsigned long long *_inputShape;
}

@property float rotation_range;
@property float horizontal_flip;
@property float zoom_range;
@property float shear_range;
@property float contrast_range;
@property float brightness_range;
@property int nAugmentations;
@property int doBatchnormTuning;
@property unsigned long long descriptors_mem_cache_size;
@property unsigned long long descriptors_file_cache_size;

+ (id)VisionSceneNet_iOS10_Extractor;
+ (id)inception_v3_Extractor;
+ (id)passthroughExtractor;
+ (id)VisionSmartCamNet_iOS11_Extractor;

- (void).cxx_destruct;
- (float *)extractDescriptorForDataPoint:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0 freeWhenDone:(BOOL)a1;
- (void)extractForDataPoint:(id)a0;
- (struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })cropResizeInputImage:(struct vImage_Buffer { void *x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; })a0;
- (int)numberOfChannels;
- (id).cxx_construct;
- (id)initWithNetwork:(id)a0;

@end
