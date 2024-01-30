@interface TSDCapabilities : NSObject

@property (class, readonly, nonatomic) TSDCapabilities *currentCapabilities;

@property (readonly, nonatomic) long long platform;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) long long device;
@property (readonly, nonatomic) long long renderer;
@property (readonly, nonatomic) BOOL isRendererH3OrBelow;
@property (readonly, nonatomic) BOOL isRendererH4OrBelow;
@property (readonly, nonatomic) BOOL isRendererH5OrBelow;
@property (readonly, nonatomic) BOOL hasLightningPort;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumHardcodedTextureSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } maximumImageSize;
@property (readonly, nonatomic) BOOL isMetalCapable;
@property (readonly, nonatomic) unsigned long long physicalMemory;
@property (readonly, nonatomic) BOOL hasHEVCHardwareEncoding;

- (id)init;
- (void)p_setupPlatform;
- (struct CGSize { double x0; double x1; })maximumMetalTextureSizeForDevice:(id)a0;
- (BOOL)p_isMetalCapable;
- (void)p_setupDevice;
- (struct CGSize { double x0; double x1; })maximumTextureSizeWithGLContext:(id)a0;

@end
