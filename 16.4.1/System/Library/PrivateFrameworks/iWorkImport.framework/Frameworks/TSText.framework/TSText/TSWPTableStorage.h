@interface TSWPTableStorage : TSWPStorage

- (id)initWithContext:(id)a0 string:(id)a1 kind:(unsigned char)a2 stylesheet:(id)a3 paragraphStyle:(id)a4 listStyle:(id)a5 section:(id)a6 columnStyle:(id)a7 paragraphDirection:(int)a8;
- (void)loadFromUnarchiver:(id)a0;
- (void)nonUndoableRebuildCellAttributes:(void *)a0;

@end
