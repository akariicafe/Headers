@class NSMutableArray;

@interface TSWPDropCapCharacterMetrics : NSObject {
    NSMutableArray *_metricData;
}

@property (readonly, nonatomic) BOOL isRightToLeft;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL isVertical;
@property (readonly, nonatomic) double baseline;

- (void).cxx_destruct;
- (id)description;
- (void)applyTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithCharacterCount:(unsigned long long)a0 isRightToLeft:(BOOL)a1 isVertical:(BOOL)a2 baseline:(double)a3;
- (id)metricsForCharIndex:(unsigned long long)a0;
- (void)adjustMetricsForWidth:(double)a0;

@end
