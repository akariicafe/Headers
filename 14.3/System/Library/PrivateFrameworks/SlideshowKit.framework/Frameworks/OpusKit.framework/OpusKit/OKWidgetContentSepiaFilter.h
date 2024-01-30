@class NSNumber;

@interface OKWidgetContentSepiaFilter : OKWidgetBasicFilter <JSOKWidgetContentSepiaFilter>

@property (retain, nonatomic) NSNumber *inputIntensity;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;
+ (id)filterWithIntensity:(id)a0;

- (id)inputKeys;
- (void)dealloc;
- (id)outputImage;
- (void)setSettingInputIntensity:(id)a0;
- (id)settingInputIntensity;

@end
