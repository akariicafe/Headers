@interface CMToggleProperty : CMProperty {
    int wdValue;
}

- (int)compareValue:(id)a0;
- (int)value;
- (id)mapBold;
- (id)initWithCMTogglePropertyValue:(int)a0;
- (id)cssStringForName:(id)a0;
- (void)resolveWithBaseProperty:(id)a0;
- (id)mapItalic;
- (id)mapStrikeTrough;

@end
