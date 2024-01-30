@interface AVConcreteMutableValueTiming : AVMutableValueTiming {
    double _value;
    double _timeStamp;
    double _rate;
}

- (void)setRate:(double)a0;
- (struct { double x0; double x1; })_timing;
- (double)rate;
- (id)initWithAnchorValue:(double)a0 anchorTimeStamp:(double)a1 rate:(double)a2;
- (double)anchorValue;
- (double)anchorTimeStamp;
- (void)setAnchorValue:(double)a0;
- (void)setAnchorTimeStamp:(double)a0;

@end
