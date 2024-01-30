@interface EMAxisMapper : CMMapper

- (float)unit;
- (id)values;
- (float)strokeWidth;
- (id)labels;
- (id)position;
- (unsigned int)type;
- (struct CGColor { } *)strokeColor;
- (struct CGColor { } *)textColor;
- (float)minValue;
- (id)label;
- (float)maxValue;
- (BOOL)isLogarithmic;
- (BOOL)centerLabels;

@end
