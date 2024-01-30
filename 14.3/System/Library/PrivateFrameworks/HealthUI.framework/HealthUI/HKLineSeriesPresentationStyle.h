@class HKStrokeStyle, HKAxisLabelStyle, HKLineSeriesPointMarkerStyle, HKFillStyle, HKLegendPointAnnotationStyle;

@interface HKLineSeriesPresentationStyle : NSObject

@property (retain, nonatomic) HKStrokeStyle *strokeStyle;
@property (retain, nonatomic) HKFillStyle *fillStyle;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *pointMarkerStyle;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *endCapStyle;
@property (nonatomic) int waveForm;
@property (retain, nonatomic) HKAxisLabelStyle *annotationStyle;
@property (retain, nonatomic) HKLegendPointAnnotationStyle *legendAnnotationStyle;
@property (retain, nonatomic) HKAxisLabelStyle *axisAnnotationStyle;
@property (nonatomic) BOOL shouldApplyRollingAverage;
@property (nonatomic) BOOL shouldNegateAnnotationValue;
@property (nonatomic) double sineWaveSmoothingFactor;

- (void).cxx_destruct;

@end
