@class NSString;
@protocol MTLDevice;

@interface AGXA10FamilyDebugContext : IOGPUMetalDebugCommandEncoder <MTLDebugCommandEncoder> {
    void *_impl;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)stopCapture;
- (id)initWithCommandBuffer:(id)a0;
- (void)endEncoding;
- (void)postFinishEvent;
- (void)dumpBuffer:(id)a0;
- (void)dumpBuffer:(id)a0 name:(const char *)a1;
- (void)dumpTexture:(id)a0;
- (void)dumpTexture:(id)a0 name:(const char *)a1;
- (void)dumpTexture:(id)a0 name:(const char *)a1 glMode:(BOOL)a2;
- (unsigned int)getLastStartStopCaptureResult;
- (void)postFinishEvent:(const char *)a0;
- (void)startCapture;
- (void)startCaptureWithSettings:(const char *)a0;
- (void)startCaptureWithSettings:(const char *)a0 from:(const char *)a1;
- (void)stopCapture:(const char *)a0;

@end
