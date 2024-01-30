@class NSTextTable;

@interface NSTextTableBlock : NSTextBlock <NSSecureCoding> {
    NSTextTable *_table;
    long long _rowNum;
    long long _colNum;
    long long _rowSpan;
    long long _colSpan;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;

- (id)table;
- (id)init;
- (long long)startingRow;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)rowSpan;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForLayoutAtPoint:(struct CGPoint { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 textContainer:(id)a2 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 textContainer:(id)a2 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)initWithTable:(id)a0 startingRow:(long long)a1 rowSpan:(long long)a2 startingColumn:(long long)a3 columnSpan:(long long)a4;
- (void)_setColumnSpan:(long long)a0;
- (long long)startingColumn;
- (void)_setRowSpan:(long long)a0;
- (id)initWithCoder:(id)a0;
- (long long)columnSpan;
- (void)drawBackgroundWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 characterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 layoutManager:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
