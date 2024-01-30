@interface EMAxisMapper : CMMapper

- (id)position;
- (id)values;
- (struct CGColor { } *)strokeColor;
- (struct CGColor { } *)textColor;
- (float)unit;
- (id)labels;
- (float)maxValue;
- (unsigned int)type;
- (float)minValue;
- (id)label;
- (float)strokeWidth;
- (BOOL)isLogarithmic;
- (BOOL)centerLabels;

@end
