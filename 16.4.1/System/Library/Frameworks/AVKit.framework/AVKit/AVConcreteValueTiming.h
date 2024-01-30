@interface AVConcreteValueTiming : AVValueTiming {
    double _value;
    double _timeStamp;
    double _rate;
}

- (struct { double x0; double x1; })_timing;
- (double)rate;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAnchorValue:(double)a0 anchorTimeStamp:(double)a1 rate:(double)a2;
- (double)anchorValue;
- (double)anchorTimeStamp;

@end
