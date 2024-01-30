@class NSString;

@interface SIE5RTSurfacePortDescriptor : NSObject <SIE5RTPortDescriptor> {
    struct e5rt_io_port { } *_port;
    struct e5rt_surface_desc { } *_desc;
    int _format;
    unsigned long long _width;
    unsigned long long _height;
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
- (unsigned long long)getBatchnum;
- (unsigned long long)getChannels;
- (void *)getDataPtr;
- (unsigned long long)getNumberOfElements;
- (unsigned long long)getRowElements;
- (id)initWithE5RTPort:(struct e5rt_io_port { } *)a0 portType:(long long)a1;

@end
