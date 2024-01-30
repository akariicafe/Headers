@interface TSTWPFormulaSelection : TSWPSelection

@property (nonatomic) unsigned long long activeTokenCharIndex;

+ (Class)archivedSelectionClass;

- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(int)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(int)a2 caretAffinity:(int)a3 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 leadingEdge:(BOOL)a5 leadingCharIndex:(unsigned long long)a6;
- (id)initWithType:(int)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleInsertionBehavior:(int)a2 caretAffinity:(int)a3 smartFieldRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4 leadingEdge:(BOOL)a5 leadingCharIndex:(unsigned long long)a6 activeTokenCharIndex:(unsigned long long)a7;

@end
