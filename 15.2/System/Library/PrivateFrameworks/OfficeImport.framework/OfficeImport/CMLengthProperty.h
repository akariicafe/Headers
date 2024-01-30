@interface CMLengthProperty : CMProperty {
    double value;
    int unitType;
}

+ (double)convertToPoints:(double)a0 unit:(int)a1;
+ (id)cssStringValue:(double)a0 unit:(int)a1;

- (int)intValue;
- (int)unitType;
- (id)initWithNumber:(double)a0;
- (double)value;
- (id)description;
- (int)compareValue:(id)a0;
- (id)initWithNumber:(double)a0 unit:(int)a1;
- (id)cssStringForName:(id)a0;
- (id)cssString;
- (void)addNumber:(double)a0 unit:(int)a1;

@end
