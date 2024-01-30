@protocol MTLCaptureScope;

@interface MTLCaptureManager : NSObject

@property (retain) id<MTLCaptureScope> defaultCaptureScope;
@property (readonly) BOOL isCapturing;

+ (id)sharedCaptureManager;

- (id)newCaptureScopeWithCommandQueue:(id)a0;
- (void)startCaptureWithCommandQueue:(id)a0;
- (void)startCaptureWithScope:(id)a0;
- (void)stopCapture;
- (BOOL)startCaptureWithDescriptor:(id)a0 error:(id *)a1;
- (id)newCaptureScopeWithDevice:(id)a0;
- (void)dealloc;
- (void)startCaptureWithDevice:(id)a0;
- (BOOL)supportsDestination:(long long)a0;

@end
