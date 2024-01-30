@class NSNumber;

@interface OKWidgetContentColorControlsFilter : OKWidgetBasicFilter <JSOKWidgetContentColorControlsFilter>

@property (retain, nonatomic) NSNumber *inputSaturation;
@property (retain, nonatomic) NSNumber *inputBrightness;
@property (retain, nonatomic) NSNumber *inputContrast;

+ (id)filterWithInputSaturation:(id)a0 inputBrightness:(id)a1 inputContrast:(id)a2;
+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)outputImage;
- (void)dealloc;
- (id)inputKeys;
- (void)setSettingInputBrightness:(id)a0;
- (void)setSettingInputContrast:(id)a0;
- (void)setSettingInputSaturation:(id)a0;
- (id)settingInputContrast;
- (id)settingInputSaturation;
- (id)setttingInputBrightness;

@end
