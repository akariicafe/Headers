@class UIColor, NSArray;

@interface NTKSnowglobeColors : NSObject

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *backlightColor;
@property (readonly, nonatomic) NSArray *backgroundObjectColorFrom;
@property (readonly, nonatomic) NSArray *backgroundObjectColorTo;
@property (readonly, nonatomic) double backgroundObjectColorTransitionFraction;

- (void).cxx_destruct;
- (id)_backgroundObjectColorsFromColors:(id)a0 randoms:(id)a1;
- (id)backgroundColorsForRandoms:(id)a0;
- (id)initWithPalette:(id)a0;

@end
