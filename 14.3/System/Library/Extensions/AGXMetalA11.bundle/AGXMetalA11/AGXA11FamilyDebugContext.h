@class NSString;
@protocol MTLDevice;

@interface AGXA11FamilyDebugContext : IOGPUMetalDebugCommandEncoder <MTLDebugCommandEncoder> {
    struct DebugContext<AGX::G10::Encoders, AGX::G10::Classes, AGX::G10::ObjClasses> { id x0; unsigned int x1; BOOL x2; } *_impl;
}

@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopCapture:(const char *)a0;
- (unsigned int)getLastStartStopCaptureResult;
- (void)dumpBuffer:(id)a0 name:(const char *)a1;
- (void)dumpBuffer:(id)a0;
- (void)dumpTexture:(id)a0 name:(const char *)a1 glMode:(BOOL)a2;
- (void)dumpTexture:(id)a0 name:(const char *)a1;
- (void)dumpTexture:(id)a0;
- (void)postFinishEvent:(const char *)a0;
- (void)postFinishEvent;
- (id)initWithCommandBuffer:(id)a0;
- (void)dealloc;
- (void)startCapture;
- (void)startCaptureWithSettings:(const char *)a0 from:(const char *)a1;
- (void)startCaptureWithSettings:(const char *)a0;
- (void)endEncoding;
- (void)stopCapture;

@end
