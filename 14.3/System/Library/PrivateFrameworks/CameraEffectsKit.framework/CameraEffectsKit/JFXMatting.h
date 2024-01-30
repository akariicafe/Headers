@interface JFXMatting : NSObject {
    struct CGSize { double width; double height; } _colorBufferSize;
    long long _cameraLocation;
}

@property (nonatomic) BOOL ready;

+ (void)postNotification:(unsigned long long)a0;
+ (BOOL)_defaultMatteGeneratorPrefersDepth;
+ (struct CGSize { double x0; double x1; })mattingDepthInputSize;
+ (id)depthDataForCVPixelBuffer:(struct __CVBuffer { } *)a0;
+ (BOOL)canMatteWithANE;
+ (BOOL)isCVASegMattingSPIWorking;
+ (Class)defaultMatteGeneratorClass;
+ (BOOL)defaultMatteGeneratorPrefersDepth;
+ (id)defaultMatteGenerator:(id)a0;

- (id)initForFrameSet:(id)a0;
- (BOOL)isValidForCameraFrameSet:(id)a0;
- (void)requestMattingStatus;
- (void)alphaMatteForFrameSet:(id)a0 mattingPerfState:(id)a1 completionHandler:(id /* block */)a2;

@end
