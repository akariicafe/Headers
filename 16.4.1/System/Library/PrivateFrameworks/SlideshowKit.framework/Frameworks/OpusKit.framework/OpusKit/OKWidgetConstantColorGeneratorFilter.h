@class CIColor;

@interface OKWidgetConstantColorGeneratorFilter : OKWidgetBasicFilter

@property (retain, nonatomic) CIColor *inputColor;

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)outputImage;
- (void)dealloc;
- (id)inputKeys;
- (void)setSettingInputColor:(id)a0;

@end
