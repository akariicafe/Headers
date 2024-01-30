@interface EMAxisMapper : CMMapper

- (float)minValue;
- (float)maxValue;
- (float)strokeWidth;
- (float)unit;
- (id)values;
- (id)labels;
- (struct CGColor { } *)strokeColor;
- (id)position;
- (id)label;
- (unsigned int)type;
- (struct CGColor { } *)textColor;
- (BOOL)isLogarithmic;
- (BOOL)centerLabels;

@end
