@class NSNumber;

@interface OKWidgetContentSepiaFilter : OKWidgetBasicFilter <JSOKWidgetContentSepiaFilter>

@property (retain, nonatomic) NSNumber *inputIntensity;

+ (id)filterWithIntensity:(id)a0;
+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)outputImage;
- (void)dealloc;
- (id)inputKeys;
- (void)setSettingInputIntensity:(id)a0;
- (id)settingInputIntensity;

@end
