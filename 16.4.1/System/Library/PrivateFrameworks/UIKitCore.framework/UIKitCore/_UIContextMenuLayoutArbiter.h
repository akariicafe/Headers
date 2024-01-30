@class _UIContextMenuLayoutArbiterInput, UIView;

@interface _UIContextMenuLayoutArbiter : NSObject

@property (weak, nonatomic) UIView *containerView;
@property (nonatomic) unsigned long long currentLayout;
@property (retain, nonatomic) _UIContextMenuLayoutArbiterInput *currentInput;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentBounds;
@property (readonly, nonatomic) struct { unsigned long long attachment; unsigned long long alignment; double attachmentOffset; double alignmentOffset; long long gravity; } menuAnchor;

- (void).cxx_destruct;
- (id)_accessoryPositionsForBaseLayout:(id)a0;
- (unsigned long long)_automaticAlignmentAndOffset:(out double *)a0 forAttachment:(unsigned long long)a1 sourcePoint:(struct CGPoint { double x0; double x1; })a2;
- (struct CGPoint { double x0; double x1; })_computedMenuAnchorPointForMenuFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 previewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_computedMenuBoundsForContentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 predictedPreviewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_computedPreviewBoundsForContentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_defaultAttachmentEdge;
- (void)_drawContentBoundsDebugUI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_positionPlatterFrame:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 andActionViewFrame:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 aboutSourcePoint:(struct CGPoint { double x0; double x1; })a3;
- (id)computedLayoutWithInput:(id)a0;
- (double)contentSpacing;
- (id)initWithContainerView:(id)a0 layout:(unsigned long long)a1;

@end
