@interface TSCHTrendDataPoint : NSObject {
    double _dataPointX;
    double _dataPointY;
    unsigned long long _valueIndex;
}

- (unsigned long long)valueIndex;
- (id)initWithPointX:(double)a0 pointY:(double)a1 forValueIndex:(unsigned long long)a2;
- (long long)xValueCompare:(id)a0;
- (double)dataPointX;
- (double)dataPointY;

@end
