@class TSWPStorage;

@interface TSWPInstructionalTextLayout : TSWPLayout

@property (retain, nonatomic) TSWPStorage *storage;

- (void)setStorage:(id)a0;
- (BOOL)isInstructional;
- (id)initWithInfo:(id)a0 storage:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
