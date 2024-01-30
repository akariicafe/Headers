@interface TSWPURLDragItem : TSWPDragItem

@property (readonly, nonatomic) struct CGPoint { double x; double y; } canvasDragPoint;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (id)initWithDragPreview:(id)a0 canvasRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 canvasDragPoint:(struct CGPoint { double x0; double x1; })a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3;
- (id)retargetedDragPreviewForDefaultTargetedDragPreview:(id)a0 icc:(id)a1 canvasView:(id)a2 boundsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
