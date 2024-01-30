@interface EDTableFilter : NSObject {
    int mScale;
    int mOperator;
    double mValue;
    double mFilterValue;
}

+ (id)edTableFilter;

- (int)scale;
- (int)operatorType;
- (double)value;
- (id)description;
- (void)setOperatorType:(int)a0;
- (void)setScale:(int)a0;
- (void)setValue:(double)a0;
- (void)setFilterValue:(double)a0;
- (double)filterValue;

@end
