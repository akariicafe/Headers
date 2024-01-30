@protocol MTLCaptureScope;

@interface MTLCaptureManager : NSObject

@property (retain) id<MTLCaptureScope> defaultCaptureScope;
@property (readonly) BOOL isCapturing;

+ (id)sharedCaptureManager;

- (void)dealloc;
- (void)startCaptureWithScope:(id)a0;
- (void)startCaptureWithDevice:(id)a0;
- (id)newCaptureScopeWithCommandQueue:(id)a0;
- (BOOL)startCaptureWithDescriptor:(id)a0 error:(id *)a1;
- (BOOL)supportsDestination:(long long)a0;
- (void)startCaptureWithCommandQueue:(id)a0;
- (id)newCaptureScopeWithDevice:(id)a0;
- (void)stopCapture;

@end
