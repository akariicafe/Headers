@class NSString, IOGPUMTLFence, IOGPUMetalDevice;
@protocol MTLDevice;

@interface IOGPUMetalFence : _MTLFence <MTLFenceSPI> {
    IOGPUMetalDevice<MTLDevice> *_device;
    IOGPUMTLFence *_fence;
    unsigned int _fenceIndex;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDevice:(id)a0;
- (void)dealloc;

@end
