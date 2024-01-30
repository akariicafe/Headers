@interface CMLengthProperty : CMProperty {
    double value;
    int unitType;
}

+ (double)convertToPoints:(double)a0 unit:(int)a1;
+ (id)cssStringValue:(double)a0 unit:(int)a1;

- (int)intValue;
- (double)value;
- (id)description;
- (int)compareValue:(id)a0;
- (int)unitType;
- (id)initWithNumber:(double)a0;
- (id)initWithNumber:(double)a0 unit:(int)a1;
- (void)addNumber:(double)a0 unit:(int)a1;
- (id)cssString;
- (id)cssStringForName:(id)a0;

@end
