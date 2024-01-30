@class NSString, AVFlashlight;

@interface VCCameraTorchManager : NSObject <AXCameraTorchManager> {
    AVFlashlight *_flashlight;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)turnTorch:(BOOL)a0;
- (BOOL)openTorchDevice;
- (void)closeTorchDevice;
- (void)turnTorchOn;
- (void)turnTorchOff;

@end
