@class UIColor;

@interface SFCircleProgressLayer : CALayer {
    double _oneFullRotation;
}

@property (nonatomic) long long progressStartPoint;
@property (retain, nonatomic) UIColor *progressColor;
@property (retain, nonatomic) UIColor *progressBackgroundColor;
@property (nonatomic) double progressLineWidth;
@property (nonatomic) BOOL usesRoundedLineCap;
@property (nonatomic) BOOL showProgressTray;
@property (nonatomic) double progress;

+ (BOOL)needsDisplayForKey:(id)a0;

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithLayer:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
