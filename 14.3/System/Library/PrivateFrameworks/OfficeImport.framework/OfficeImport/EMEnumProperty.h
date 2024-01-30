@interface EMEnumProperty : CMProperty {
    int wdValue;
}

+ (id)mapUnderlineValue:(int)a0;
+ (id)mapHorizontalAlignmentValue:(int)a0;
+ (id)mapVerticalAlignmentValue:(int)a0;

- (int)value;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)mapUnderline;
- (id)initWithEnum:(int)a0;
- (id)cssStringForName:(id)a0;
- (id)mapHorizontalAlignment;
- (id)mapVerticalAlignment;

@end
