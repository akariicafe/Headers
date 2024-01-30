@interface NSTextTable : NSTextBlock <NSSecureCoding> {
    unsigned long long _numCols;
    unsigned long long _tableFlags;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;

- (id)_rowArrayForBlock:(id)a0 atIndex:(unsigned long long)a1 text:(id)a2 layoutManager:(id)a3 containerWidth:(double)a4 withRepetitions:(BOOL)a5 collapseBorders:(BOOL)a6 rowCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a7 indexInRow:(unsigned long long *)a8 startingRow:(long long *)a9 startingColumn:(long long *)a10 previousRowBlockHelper:(id *)a11;
- (id)init;
- (void)setNumberOfColumns:(unsigned long long)a0;
- (unsigned long long)_tableFlags;
- (void)dealloc;
- (unsigned long long)numberOfColumns;
- (void)_takeValuesFromTextBlock:(id)a0;
- (BOOL)hidesEmptyCells;
- (void)setCollapsesBorders:(BOOL)a0;
- (BOOL)_missingColumnsForRowRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 blockIndex:(unsigned long long)a1 text:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForBlock:(id)a0 layoutAtPoint:(struct CGPoint { double x0; double x1; })a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 textContainer:(id)a3 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_contentRectForCharRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 textContainer:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsRectForBlock:(id)a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 textContainer:(id)a3 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
- (BOOL)collapsesBorders;
- (void)drawBackgroundForBlock:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inView:(id)a2 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 layoutManager:(id)a4;
- (void)setHidesEmptyCells:(BOOL)a0;
- (unsigned long long)layoutAlgorithm;
- (void)setLayoutAlgorithm:(unsigned long long)a0;
- (void)_setTableFlags:(unsigned long long)a0;
- (id)_descriptionAtIndex:(unsigned long long)a0 text:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
