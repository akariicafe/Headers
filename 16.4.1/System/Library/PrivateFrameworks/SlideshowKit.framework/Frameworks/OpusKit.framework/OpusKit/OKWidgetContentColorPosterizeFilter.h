@class NSNumber;

@interface OKWidgetContentColorPosterizeFilter : OKWidgetBasicFilter <JSOKWidgetContentColorPosterizeFilter>

@property (retain, nonatomic) NSNumber *inputLevels;

+ (id)filterWithInputLevels:(id)a0;
+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)outputImage;
- (id)inputKeys;
- (void)setSettingInputLevels:(id)a0;

@end
