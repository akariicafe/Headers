@class NSString;

@interface SIE5RTTensorPortDescriptor : NSObject <SIE5RTPortDescriptor> {
    struct e5rt_tensor_desc { } *_desc;
    struct e5rt_tensor_desc { } *_client_desc;
    struct e5rt_buffer_object { } *_buffer;
    struct e5rt_io_port { } *_port;
    BOOL _isFP32;
    BOOL _isFP16_ANE;
    BOOL _isS8_ANE;
    BOOL _isU8_ANE;
    BOOL _support_zero_copy;
    struct __CVBuffer { } *_memory_pixel_buffer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (const unsigned long long *)getShape;
- (unsigned long long)getHeight;
- (unsigned long long)getWidth;
- (unsigned long long)getRank;
- (void)bindInputPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)bindInputRawPointer:(const void *)a0;
- (struct e5rt_tensor_desc { } *)createPackedFP32TensorDescriptor;
- (unsigned long long)getBatchnum;
- (unsigned long long)getChannels;
- (unsigned long long)getComponentSize;
- (int)getComponentType;
- (void *)getDataPtr;
- (unsigned char)getNumComponents;
- (unsigned long long)getNumberOfElements;
- (unsigned long long)getRowElements;
- (const long long *)getStrides;
- (id)initWithE5RTPort:(struct e5rt_io_port { } *)a0 portType:(long long)a1;
- (BOOL)isFP16_ANE;
- (BOOL)isPacked;
- (BOOL)isPackedFP32;
- (BOOL)isS8_ANE;
- (BOOL)isU8_ANE;

@end
