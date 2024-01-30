@class NSNumber;

@interface OKWidgetContentGaussianBlurFilter : OKWidgetBasicFilter <JSOKWidgetContentGaussianBlurFilter>

@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;
+ (id)filterWithInputRadius:(id)a0;

- (id)inputKeys;
- (void)dealloc;
- (id)outputImage;
- (id)settingInputRadius;
- (void)setSettingInputRadius:(id)a0;

@end
