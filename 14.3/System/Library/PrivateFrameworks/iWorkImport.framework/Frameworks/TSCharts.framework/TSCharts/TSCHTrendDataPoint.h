@interface TSCHTrendDataPoint : NSObject {
    double mDataPointX;
    double mDataPointY;
    unsigned long long mValueIndex;
}

- (id)initWithPointX:(double)a0 pointY:(double)a1 forValueIndex:(unsigned long long)a2;
- (long long)xValueCompare:(id)a0;
- (double)dataPointX;
- (double)dataPointY;
- (unsigned long long)valueIndex;

@end
