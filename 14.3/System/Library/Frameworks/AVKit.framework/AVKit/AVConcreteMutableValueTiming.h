@interface AVConcreteMutableValueTiming : AVMutableValueTiming {
    double _value;
    double _timeStamp;
    double _rate;
}

- (double)rate;
- (double)anchorValue;
- (struct { double x0; double x1; })_timing;
- (void)setRate:(double)a0;
- (double)anchorTimeStamp;
- (id)initWithAnchorValue:(double)a0 anchorTimeStamp:(double)a1 rate:(double)a2;
- (void)setAnchorValue:(double)a0;
- (void)setAnchorTimeStamp:(double)a0;

@end
