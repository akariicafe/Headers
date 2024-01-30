@interface EMSeriesMapper : CMMapper

- (id)values;
- (struct CGColor { } *)strokeColor;
- (struct CGColor { } *)fillColor;
- (float)offset;
- (unsigned int)markerType;
- (float)markerWidth;
- (float)strokeWidth;
- (struct CGColor { } *)markerColor;
- (unsigned int)chartType;
- (BOOL)useSecondaryAxis;

@end
