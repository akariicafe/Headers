@class NSString, NSArray;

@interface UIKBGradient : NSObject <NSCopying> {
    NSString *_gradientName;
    NSString *_flatColorName;
    NSString *_startColorName;
    NSString *_endColorName;
    NSArray *_colors;
    NSArray *_middleLocations;
    BOOL _usesRGBColors;
    BOOL _didQueryRGBColors;
}

@property (nonatomic) double opacity;
@property (nonatomic) BOOL horizontal;
@property (readonly, nonatomic) BOOL usesRGBColors;
@property (readonly, nonatomic) NSString *flatColorName;

+ (id)gradientWith3Colors:(id)a0 middleLocation:(double)a1;
+ (id)gradientWithColors:(id)a0 middleLocations:(id)a1;
+ (id)gradientWithFlatColor:(id)a0;
+ (id)gradientWithName:(id)a0;
+ (id)gradientWithStartColor:(id)a0 endColor:(id)a1;

- (id)initWithName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (struct CGGradient { } *)CGGradient;
- (id)initWith3Colors:(id)a0 middleLocation:(double)a1;
- (id)initWithColors:(id)a0 middleLocations:(id)a1;
- (id)initWithFlatColor:(id)a0;
- (id)initWithStartColor:(id)a0 endColor:(id)a1;

@end
