@interface ODDShapeAdjustment : NSObject {
    unsigned int mIndex;
    double mValue;
}

- (void)setIndex:(unsigned int)a0;
- (unsigned int)index;
- (double)value;
- (id)description;
- (void)setValue:(double)a0;

@end
