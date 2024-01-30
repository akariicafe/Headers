@class CIColor;

@interface OKWidgetConstantColorGeneratorFilter : OKWidgetBasicFilter

@property (retain, nonatomic) CIColor *inputColor;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;

- (id)inputKeys;
- (void)dealloc;
- (id)outputImage;
- (void)setSettingInputColor:(id)a0;

@end
