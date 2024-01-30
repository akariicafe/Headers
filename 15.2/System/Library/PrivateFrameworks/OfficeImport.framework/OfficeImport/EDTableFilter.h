@interface EDTableFilter : NSObject {
    int mScale;
    int mOperator;
    double mValue;
    double mFilterValue;
}

+ (id)edTableFilter;

- (void)setValue:(double)a0;
- (void)setOperatorType:(int)a0;
- (double)value;
- (id)description;
- (int)scale;
- (int)operatorType;
- (void)setScale:(int)a0;
- (void)setFilterValue:(double)a0;
- (double)filterValue;

@end
