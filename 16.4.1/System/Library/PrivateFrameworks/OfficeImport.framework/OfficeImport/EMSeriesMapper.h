@interface EMSeriesMapper : CMMapper

- (id)values;
- (float)strokeWidth;
- (struct CGColor { } *)fillColor;
- (float)markerWidth;
- (float)offset;
- (struct CGColor { } *)strokeColor;
- (struct CGColor { } *)markerColor;
- (unsigned int)markerType;
- (unsigned int)chartType;
- (BOOL)useSecondaryAxis;

@end
