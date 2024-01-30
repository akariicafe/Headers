@class CPRMTable, NSString;

@interface CPRMTableCell : NSObject {
    NSString *_contents;
}

@property (readonly) struct CGPDFPage { } *page;
@property (retain) CPRMTableCell *nextCellInColumn;
@property (retain) CPRMTableCell *nextCellInRow;
@property CPRMTable *table;
@property struct CGPDFNode { } *tableCellNode;

- (struct CGPDFPage { } *)page;
- (id)contents;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (unsigned long long)column;
- (unsigned long long)row;
- (struct CGColor { } *)backgroundColor;

@end
