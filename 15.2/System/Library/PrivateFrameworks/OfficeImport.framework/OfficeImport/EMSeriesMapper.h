@interface EMSeriesMapper : CMMapper

- (unsigned int)markerType;
- (float)strokeWidth;
- (id)values;
- (struct CGColor { } *)fillColor;
- (struct CGColor { } *)strokeColor;
- (float)offset;
- (struct CGColor { } *)markerColor;
- (float)markerWidth;
- (unsigned int)chartType;
- (BOOL)useSecondaryAxis;

@end
