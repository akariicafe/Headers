@interface CPTextObject : CPChunk {
    struct CGPoint { double x; double y; } anchor;
    BOOL metricInfoCalculated;
    float maxFontSize;
    double maxFontLineHeight;
}

- (float)maxFontSize;
- (void)calculateMetrics;
- (void)translateObjectYBy:(double)a0;
- (void)clearCachedInfo;
- (double)maxFontLineHeight;

@end
