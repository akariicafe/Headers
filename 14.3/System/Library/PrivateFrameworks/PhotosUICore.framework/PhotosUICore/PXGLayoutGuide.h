@class PXGLayout;

@interface PXGLayoutGuide : PXObservable <PXGMutableLayoutGuide>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceRect;
@property (weak, nonatomic) PXGLayout *referenceLayout;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInLayout:(id)a0;
- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inLayout:(id)a1;

@end
