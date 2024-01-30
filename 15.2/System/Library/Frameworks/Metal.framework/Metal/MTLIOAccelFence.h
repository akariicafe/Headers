@class NSString, MTLIOAccelDevice;
@protocol MTLDevice;

@interface MTLIOAccelFence : _MTLFence <MTLFenceSPI> {
    MTLIOAccelDevice<MTLDevice> *_device;
    unsigned int _fenceIndex;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDevice:(id)a0 fenceIndex:(unsigned int)a1;

@end
