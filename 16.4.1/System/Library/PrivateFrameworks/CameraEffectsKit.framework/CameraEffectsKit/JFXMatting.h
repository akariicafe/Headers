@interface JFXMatting : NSObject {
    struct CGSize { double width; double height; } _colorBufferSize;
    long long _cameraLocation;
}

@property (nonatomic) BOOL ready;

+ (void)postNotification:(unsigned long long)a0;
+ (BOOL)canMatteWithANE;
+ (BOOL)_defaultMatteGeneratorPrefersDepth;
+ (id)defaultMatteGenerator:(id)a0;
+ (Class)defaultMatteGeneratorClass;
+ (BOOL)defaultMatteGeneratorPrefersDepth;
+ (id)depthDataForCVPixelBuffer:(struct __CVBuffer { } *)a0;
+ (BOOL)isCVASegMattingSPIWorking;
+ (struct CGSize { double x0; double x1; })mattingDepthInputSize;

- (void)alphaMatteForFrameSet:(id)a0 mattingPerfState:(id)a1 completionHandler:(id /* block */)a2;
- (id)initForFrameSet:(id)a0;
- (BOOL)isValidForCameraFrameSet:(id)a0;
- (void)requestMattingStatus;

@end
