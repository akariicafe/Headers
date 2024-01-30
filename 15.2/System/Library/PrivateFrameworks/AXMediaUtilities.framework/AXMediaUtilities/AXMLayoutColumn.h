@class NSMutableArray;

@interface AXMLayoutColumn : AXMLayoutItem {
    NSMutableArray *_cells;
}

+ (id)column:(id)a0;

- (id)cells;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void).cxx_destruct;
- (void)addCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFrame;

@end
