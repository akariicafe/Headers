@class CIImage, OKPresentation, NSString;

@interface OKWidgetBasicFilter : CIFilter <OKSettingsSupport>

@property (nonatomic) OKPresentation *inputPresentation;
@property (retain, nonatomic) CIImage *inputImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (id)initWithSettings:(id)a0;
- (id)inputKeys;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (id)outputImage;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;

@end
