@class NSString;
@protocol MTLDevice;

@interface AGXA14FamilyDebugContext : IOGPUMetalDebugCommandEncoder <MTLDebugCommandEncoder> {
    void *_impl;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopCapture;
- (void)startCapture;
- (id)initWithCommandBuffer:(id)a0;
- (void)endEncoding;
- (void)dealloc;
- (void)startCaptureWithSettings:(const char *)a0 from:(const char *)a1;
- (void)startCaptureWithSettings:(const char *)a0;
- (void)stopCapture:(const char *)a0;
- (unsigned int)getLastStartStopCaptureResult;
- (void)dumpBuffer:(id)a0 name:(const char *)a1;
- (void)dumpBuffer:(id)a0;
- (void)dumpTexture:(id)a0 name:(const char *)a1 glMode:(BOOL)a2;
- (void)dumpTexture:(id)a0 name:(const char *)a1;
- (void)dumpTexture:(id)a0;
- (void)postFinishEvent:(const char *)a0;
- (void)postFinishEvent;

@end
