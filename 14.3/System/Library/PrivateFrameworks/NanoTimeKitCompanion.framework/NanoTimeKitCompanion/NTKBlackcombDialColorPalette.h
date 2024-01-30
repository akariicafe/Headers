@class UIColor;

@interface NTKBlackcombDialColorPalette : NSObject {
    UIColor *_backgroundColor;
    UIColor *_hourMarkerColor;
    UIColor *_smallTickColor;
    UIColor *_largeTickColor;
    UIColor *_largeHandsColor;
    UIColor *_secondHandColor;
}

@property (readonly, nonatomic) unsigned long long color;
@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *hourMarkerColor;
@property (readonly, nonatomic) UIColor *smallTickColor;
@property (readonly, nonatomic) UIColor *largeTickColor;
@property (readonly, nonatomic) long long richComplicationViewTheme;
@property (readonly, nonatomic) UIColor *platterTextColor;

+ (id)paletteForColor:(unsigned long long)a0;

- (id)initWithColor:(unsigned long long)a0;
- (void).cxx_destruct;

@end
