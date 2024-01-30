@class NSNumber, UIColor, NSData;

@interface OKWidgetContentColorCubeFilter : OKWidgetBasicFilter <JSOKWidgetContentColorCubeFilter> {
    NSData *_cubeData;
}

@property (retain, nonatomic) NSNumber *inputMinHueAngle;
@property (retain, nonatomic) NSNumber *inputMaxHueAngle;
@property (retain, nonatomic) UIColor *inputReplaceColor;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)a0;
+ (id)filterWithMinHueAngle:(id)a0 inputMaxHueAngle:(id)a1 inputReplaceColor:(id)a2;

- (id)inputKeys;
- (void)dealloc;
- (id)outputImage;
- (void)createCubeWithMinHueAngle:(double)a0 maxHueAngle:(double)a1;
- (void)rgbToHSV:(float *)a0 hsv:(float *)a1;
- (void)setSettingInputReplaceColor:(id)a0;
- (void)setSettingInputMinHueAngle:(id)a0;
- (void)setSettingInputMaxHueAngle:(id)a0;

@end
