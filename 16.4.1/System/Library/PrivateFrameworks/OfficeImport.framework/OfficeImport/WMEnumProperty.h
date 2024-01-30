@interface WMEnumProperty : CMProperty {
    unsigned long long wdValue;
}

- (unsigned long long)value;
- (id)description;
- (id)cssStringForName:(id)a0;
- (id)initWithEnum:(unsigned long long)a0;
- (id)mapCellTextVAlign;
- (id)mapJustification;
- (id)mapUnderline;
- (id)mapVerticalAlign;

@end
