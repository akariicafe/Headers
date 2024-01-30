@class NSNumber;

@interface OKWidgetContentColorControlsFilter : OKWidgetBasicFilter <JSOKWidgetContentColorControlsFilter>

@property (retain, nonatomic) NSNumber *inputSaturation;
@property (retain, nonatomic) NSNumber *inputBrightness;
@property (retain, nonatomic) NSNumber *inputContrast;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;
+ (id)filterWithInputSaturation:(id)a0 inputBrightness:(id)a1 inputContrast:(id)a2;

- (id)inputKeys;
- (void)dealloc;
- (id)outputImage;
- (id)settingInputSaturation;
- (void)setSettingInputSaturation:(id)a0;
- (id)setttingInputBrightness;
- (void)setSettingInputBrightness:(id)a0;
- (id)settingInputContrast;
- (void)setSettingInputContrast:(id)a0;

@end
