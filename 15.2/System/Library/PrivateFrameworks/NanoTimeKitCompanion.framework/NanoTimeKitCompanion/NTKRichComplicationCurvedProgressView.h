@class NTKRichComplicationCurveView;

@interface NTKRichComplicationCurvedProgressView : NTKRichComplicationProgressView {
    double _curveWidth;
    long long _progressFillStyle;
    NTKRichComplicationCurveView *_backgroundView;
    NTKRichComplicationCurveView *_foregroundView;
}

@property (nonatomic) double beginAngle;
@property (nonatomic) double endAngle;
@property (nonatomic) BOOL clockwise;

- (void)setProgress:(double)a0;
- (void).cxx_destruct;
- (id)filterForView:(id)a0 style:(long long)a1;
- (id)filterForView:(id)a0 style:(long long)a1 fraction:(double)a2;
- (id)colorForView:(id)a0 accented:(BOOL)a1;
- (id)initWithFamily:(long long)a0 curveWidth:(double)a1 padding:(double)a2 beginAngle:(double)a3 endAngle:(double)a4 forDevice:(id)a5 withFilterStyle:(long long)a6 progressFillStyle:(long long)a7;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)a0;
- (id)overrideBackgroundGradientColorsForGradientColors:(id)a0 locations:(id)a1;

@end
