@interface CMDiagramPointSegmentedPieMapper : CMDiagramPointMapper {
    double mStartAngle;
    double mStopAngle;
    BOOL mDrawArrows;
    unsigned long long mSegmentIndex;
    unsigned long long mSegmentCount;
}

- (void)setStartAngle:(double)a0;
- (void)setSegmentCount:(unsigned long long)a0;
- (void)setSegmentIndex:(unsigned long long)a0;
- (id)_arrowFillWithState:(id)a0;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)setDrawArrows:(BOOL)a0;
- (void)setStopAngle:(double)a0;
- (id)transformPresentationName;

@end
