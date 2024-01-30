@class UIColor;

@interface _UIAirDropProgressLayer : CALayer {
    double _oneFullRotation;
}

@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (nonatomic) double progressLineWidth;
@property (nonatomic) BOOL showProgressTray;
@property (nonatomic) double progress;

+ (BOOL)needsDisplayForKey:(id)a0;

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithLayer:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
