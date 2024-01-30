@class NSNumber;

@interface OKWidgetContentGaussianBlurFilter : OKWidgetBasicFilter <JSOKWidgetContentGaussianBlurFilter>

@property (retain, nonatomic) NSNumber *inputRadius;

+ (id)filterWithInputRadius:(id)a0;
+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)outputImage;
- (void)dealloc;
- (id)inputKeys;
- (void)setSettingInputRadius:(id)a0;
- (id)settingInputRadius;

@end
