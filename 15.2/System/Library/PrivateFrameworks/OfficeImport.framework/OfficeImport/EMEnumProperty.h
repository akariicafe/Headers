@interface EMEnumProperty : CMProperty {
    int wdValue;
}

+ (id)mapUnderlineValue:(int)a0;
+ (id)mapHorizontalAlignmentValue:(int)a0;
+ (id)mapVerticalAlignmentValue:(int)a0;

- (int)value;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)mapUnderline;
- (id)initWithEnum:(int)a0;
- (id)cssStringForName:(id)a0;
- (id)mapHorizontalAlignment;
- (id)mapVerticalAlignment;

@end
