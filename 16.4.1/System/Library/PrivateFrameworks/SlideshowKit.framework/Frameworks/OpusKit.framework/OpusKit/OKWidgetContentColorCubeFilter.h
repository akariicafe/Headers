@class NSNumber, UIColor, NSData;

@interface OKWidgetContentColorCubeFilter : OKWidgetBasicFilter <JSOKWidgetContentColorCubeFilter> {
    NSData *_cubeData;
}

@property (retain, nonatomic) NSNumber *inputMinHueAngle;
@property (retain, nonatomic) NSNumber *inputMaxHueAngle;
@property (retain, nonatomic) UIColor *inputReplaceColor;

+ (id)filterWithMinHueAngle:(id)a0 inputMaxHueAngle:(id)a1 inputReplaceColor:(id)a2;
+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)outputImage;
- (void)dealloc;
- (id)inputKeys;
- (void)createCubeWithMinHueAngle:(double)a0 maxHueAngle:(double)a1;
- (void)rgbToHSV:(float *)a0 hsv:(float *)a1;
- (void)setSettingInputMaxHueAngle:(id)a0;
- (void)setSettingInputMinHueAngle:(id)a0;
- (void)setSettingInputReplaceColor:(id)a0;

@end
