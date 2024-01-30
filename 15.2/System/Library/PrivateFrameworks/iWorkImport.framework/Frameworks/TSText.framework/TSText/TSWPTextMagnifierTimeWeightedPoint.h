@interface TSWPTextMagnifierTimeWeightedPoint : NSObject {
    long long m_index;
    struct { struct CGPoint { double x; double y; } point; double time; } m_points[16];
}

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } weightedPoint;

- (double)distanceCoveredInInterval:(double)a0;
- (void)clearHistory;
- (double)distanceCoveredInInterval:(double)a0 priorTo:(double)a1;
- (BOOL)historyCovers:(double)a0;
- (void)addPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })displacementInInterval:(double)a0 priorTo:(double)a1;
- (struct CGSize { double x0; double x1; })displacementInInterval:(double)a0;

@end
