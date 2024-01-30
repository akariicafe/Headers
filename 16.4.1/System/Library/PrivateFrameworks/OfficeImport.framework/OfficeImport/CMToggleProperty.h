@interface CMToggleProperty : CMProperty {
    int wdValue;
}

- (int)value;
- (int)compareValue:(id)a0;
- (id)mapStrikeTrough;
- (id)mapBold;
- (id)cssStringForName:(id)a0;
- (id)initWithCMTogglePropertyValue:(int)a0;
- (id)mapItalic;
- (void)resolveWithBaseProperty:(id)a0;

@end
