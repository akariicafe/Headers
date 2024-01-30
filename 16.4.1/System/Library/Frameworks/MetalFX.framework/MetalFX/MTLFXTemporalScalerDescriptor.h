@interface MTLFXTemporalScalerDescriptor : NSObject

@property unsigned long long version;
@property (nonatomic) unsigned long long colorTextureFormat;
@property (nonatomic) unsigned long long depthTextureFormat;
@property (nonatomic) unsigned long long motionTextureFormat;
@property (nonatomic) unsigned long long outputTextureFormat;
@property (nonatomic) unsigned long long inputWidth;
@property (nonatomic) unsigned long long inputHeight;
@property (nonatomic) unsigned long long outputWidth;
@property (nonatomic) unsigned long long outputHeight;
@property (nonatomic, getter=isAutoExposureEnabled) BOOL autoExposureEnabled;
@property (nonatomic, getter=isInputContentPropertiesEnabled) BOOL inputContentPropertiesEnabled;
@property (nonatomic) float inputContentMinScale;
@property (nonatomic) float inputContentMaxScale;

+ (BOOL)supportsDevice:(id)a0;

- (BOOL)enableInputContentProperties;
- (id)newTemporalScalerWithDevice:(id)a0;
- (void)setEnableInputContentProperties:(BOOL)a0;

@end
