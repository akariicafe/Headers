@class NSNumber;

@interface OKWidgetContentGaussianBlurFilter : OKWidgetBasicFilter <JSOKWidgetContentGaussianBlurFilter>

@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;
+ (id)filterWithInputRadius:(id)a0;

- (id)outputImage;
- (id)inputKeys;
- (void)dealloc;
- (id)settingInputRadius;
- (void)setSettingInputRadius:(id)a0;

@end
