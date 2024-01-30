@interface EDTableFilter : NSObject {
    int mScale;
    int mOperator;
    double mValue;
    double mFilterValue;
}

+ (id)edTableFilter;

- (int)operatorType;
- (void)setOperatorType:(int)a0;
- (double)value;
- (void)setScale:(int)a0;
- (int)scale;
- (id)description;
- (void)setValue:(double)a0;
- (double)filterValue;
- (void)setFilterValue:(double)a0;

@end
