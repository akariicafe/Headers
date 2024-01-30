@interface TSCHTrendDataPoint : NSObject {
    double _dataPointX;
    double _dataPointY;
    unsigned long long _valueIndex;
}

- (double)dataPointX;
- (double)dataPointY;
- (id)initWithPointX:(double)a0 pointY:(double)a1 forValueIndex:(unsigned long long)a2;
- (unsigned long long)valueIndex;
- (long long)xValueCompare:(id)a0;

@end
