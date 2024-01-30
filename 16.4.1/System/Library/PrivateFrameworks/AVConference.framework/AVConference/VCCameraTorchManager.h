@class NSString, AVFlashlight;

@interface VCCameraTorchManager : NSObject <AXCameraTorchManager> {
    AVFlashlight *_flashlight;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (BOOL)openTorchDevice;
- (void)closeTorchDevice;
- (void)turnTorch:(BOOL)a0;
- (void)turnTorchOff;
- (void)turnTorchOn;

@end
