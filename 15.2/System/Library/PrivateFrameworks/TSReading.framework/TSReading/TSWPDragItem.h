@class UITargetedDragPreview;

@interface TSWPDragItem : NSObject

@property (readonly, retain, nonatomic) UITargetedDragPreview *targetedDragPreview;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } canvasRect;

- (void)dealloc;
- (id)initWithDragPreview:(id)a0 canvasRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)retargetedDragPreviewForDefaultTargetedDragPreview:(id)a0 icc:(id)a1 canvasView:(id)a2 boundsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end
