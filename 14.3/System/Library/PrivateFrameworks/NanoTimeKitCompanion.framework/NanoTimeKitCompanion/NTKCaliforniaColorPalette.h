@class UIColor, NSString, CLKDevice;

@interface NTKCaliforniaColorPalette : NSObject <NTKCircularAnalogDialColorPalette> {
    unsigned long long _color;
    UIColor *_backgroundColor;
    UIColor *_circularBackgroundColor;
    UIColor *_swatchBackgroundColor;
    UIColor *_hourMarkerColor;
    UIColor *_smallTickColor;
    UIColor *_largeTickColor;
    UIColor *_hourHandInlayColor;
    UIColor *_hourHandStrokeColor;
    UIColor *_secondHandColor;
    UIColor *_cornerComplicationOuterTextColor;
    UIColor *_cornerComplicationInnerTextColor;
    UIColor *_simpleTextComplicationColor;
    UIColor *_circularComplicationColorA;
    UIColor *_circularComplicationColorB;
    UIColor *_bezelComplicationColor;
    UIColor *_circularDialSubtickColor;
    CLKDevice *_device;
}

@property (readonly, nonatomic) unsigned long long color;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *circularBackgroundColor;
@property (readonly, nonatomic) BOOL isBlackBackground;
@property (readonly, nonatomic) UIColor *hourMarkerColor;
@property (readonly, nonatomic) UIColor *smallTickColor;
@property (readonly, nonatomic) UIColor *largeTickColor;
@property (readonly, nonatomic) UIColor *hourHandInlayColor;
@property (readonly, nonatomic) UIColor *hourHandStrokeColor;
@property (readonly, nonatomic) UIColor *secondHandColor;
@property (readonly, nonatomic) UIColor *cornerComplicationOuterTextColor;
@property (readonly, nonatomic) UIColor *cornerComplicationInnerTextColor;
@property (readonly, nonatomic) UIColor *simpleTextComplicationColor;
@property (readonly, nonatomic) UIColor *bezelComplicationColor;
@property (readonly, nonatomic) UIColor *circularComplicationColorA;
@property (readonly, nonatomic) UIColor *circularComplicationColorB;
@property (readonly, nonatomic) long long richComplicationViewTheme;
@property (readonly, nonatomic) UIColor *platterTextColor;
@property (readonly, nonatomic) UIColor *worldClockDaytimeBackgrounColor;
@property (readonly, nonatomic) UIColor *worldClockDaytimeHandsColors;
@property (readonly, nonatomic) UIColor *worldClockDaytimeHandsDotColors;
@property (readonly, nonatomic) UIColor *worldClockNighttimeBackgrounColor;
@property (readonly, nonatomic) UIColor *worldClockNighttimeHandsColors;
@property (readonly, nonatomic) UIColor *worldClockNighttimeHandsDotColors;
@property (readonly, nonatomic) BOOL isMulticolorPalette;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)paletteForColor:(unsigned long long)a0;

- (id)initWithColor:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)colorForHourMarker:(unsigned long long)a0;
- (id)swatchImage;
- (id)circularDialFillColor;
- (id)colorForCircularTicksForMinute:(unsigned long long)a0;
- (id)circularDialSubtickColor;
- (id)colorForCircularTicksForHour:(unsigned long long)a0;
- (id)circularDialTickColor;
- (BOOL)_shouldHideColor:(unsigned long long)a0;
- (id)_colorForCircularTicksForMinute:(unsigned long long)a0;
- (BOOL)isLightColor;
- (id)swatchBackgroundColor;

@end
