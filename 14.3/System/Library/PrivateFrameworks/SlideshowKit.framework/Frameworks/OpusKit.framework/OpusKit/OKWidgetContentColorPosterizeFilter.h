@class NSNumber;

@interface OKWidgetContentColorPosterizeFilter : OKWidgetBasicFilter <JSOKWidgetContentColorPosterizeFilter>

@property (retain, nonatomic) NSNumber *inputLevels;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;
+ (id)filterWithInputLevels:(id)a0;

- (id)inputKeys;
- (id)outputImage;
- (void)setSettingInputLevels:(id)a0;

@end
