@class UIColor;

@interface NTKSolarRichComplicationCircularViewColorPoint : NSObject

@property (readonly, nonatomic) UIColor *color1;
@property (readonly, nonatomic) UIColor *color2;
@property (readonly, nonatomic) UIColor *color3;
@property (readonly, nonatomic) double position1;
@property (readonly, nonatomic) double position2;
@property (readonly, nonatomic) double position3;
@property (readonly, nonatomic) double progress;

+ (id)allPoints;
+ (id)pointWithColor1:(id)a0 color2:(id)a1 color3:(id)a2 position1:(double)a3 position2:(double)a4 position3:(double)a5 progress:(double)a6;

- (void).cxx_destruct;

@end
