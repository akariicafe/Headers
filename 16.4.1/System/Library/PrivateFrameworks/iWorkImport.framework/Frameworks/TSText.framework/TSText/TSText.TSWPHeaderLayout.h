@interface TSText.TSWPHeaderLayout : TSWPLayout

- (id)initWithInfo:(id)a0;
- (id)initWithInfo:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGSize { double x0; double x1; })maximumFrameSizeForChild:(id)a0;
- (id)initWithInfo:(id)a0 storage:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)parentLayoutForPartitionableAttachment:(id)a0 atPosition:(struct CGPoint { double x0; double x1; })a1;

@end
