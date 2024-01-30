@class NSString;
@protocol SIE5RTPortDescriptor;

@interface SIE5RTPort : NSObject {
    id<SIE5RTPortDescriptor> _desc;
    NSString *_name;
    long long _portType;
}

@property (readonly) struct e5rt_io_port { } *port;

- (void).cxx_destruct;
- (const unsigned long long *)getShape;
- (unsigned long long)getHeight;
- (unsigned long long)getWidth;
- (void)bindInputPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)bindInputRawPointer:(const void *)a0;
- (void)bindOutputSurface:(struct __IOSurface { } *)a0;
- (unsigned long long)getBatchnum;
- (unsigned long long)getChannels;
- (void *)getDataPtr;
- (unsigned long long)getNumberOfElements;
- (unsigned long long)getRowElements;
- (id)initPortWithE5RTStreamOperation:(struct e5rt_execution_stream_operation { } *)a0 blobName:(id)a1 portType:(long long)a2;

@end
