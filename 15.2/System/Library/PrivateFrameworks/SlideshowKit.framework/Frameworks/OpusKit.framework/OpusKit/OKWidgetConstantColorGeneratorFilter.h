@class CIColor;

@interface OKWidgetConstantColorGeneratorFilter : OKWidgetBasicFilter

@property (retain, nonatomic) CIColor *inputColor;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (id)outputImage;
- (id)inputKeys;
- (void)dealloc;
- (void)setSettingInputColor:(id)a0;

@end
