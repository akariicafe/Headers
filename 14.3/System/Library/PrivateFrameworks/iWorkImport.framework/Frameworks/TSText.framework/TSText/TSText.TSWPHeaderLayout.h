@class TSDLayout;

@interface TSText.TSWPHeaderLayout : TSWPLayout

@property (nonatomic, readonly) TSDLayout *parentLayoutForInlineAttachments;

- (id)init;
- (id)initWithInfo:(id)a0;
- (struct CGSize { double x0; double x1; })maximumFrameSizeForChild:(id)a0;
- (id)initWithInfo:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithInfo:(id)a0 storage:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
