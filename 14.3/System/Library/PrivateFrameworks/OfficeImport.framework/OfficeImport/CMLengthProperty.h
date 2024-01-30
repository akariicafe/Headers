@interface CMLengthProperty : CMProperty {
    double value;
    int unitType;
}

+ (double)convertToPoints:(double)a0 unit:(int)a1;
+ (id)cssStringValue:(double)a0 unit:(int)a1;

- (int)compareValue:(id)a0;
- (double)value;
- (id)initWithNumber:(double)a0;
- (id)description;
- (int)unitType;
- (int)intValue;
- (id)initWithNumber:(double)a0 unit:(int)a1;
- (id)cssStringForName:(id)a0;
- (id)cssString;
- (void)addNumber:(double)a0 unit:(int)a1;

@end
