@interface WMEnumProperty : CMProperty {
    unsigned long long wdValue;
}

- (unsigned long long)value;
- (id)description;
- (id)mapJustification;
- (id)mapVerticalAlign;
- (id)mapUnderline;
- (id)mapCellTextVAlign;
- (id)initWithEnum:(unsigned long long)a0;
- (id)cssStringForName:(id)a0;

@end
