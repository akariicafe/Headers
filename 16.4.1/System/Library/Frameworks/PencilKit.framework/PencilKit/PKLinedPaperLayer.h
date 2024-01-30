@protocol PKLinedPaperLayerDelegate;

@interface PKLinedPaperLayer : CALayer

@property (readonly, weak, nonatomic) id<PKLinedPaperLayerDelegate> linedPaperLayerDelegate;

- (id)_traitCollection;
- (void).cxx_destruct;
- (id)_attachmentContainerView;
- (id)_linedPaper;
- (id)initWithLinedPaperLayerDelegate:(id)a0;
- (void)updateLinesFromAttachmentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateSublayersFromAttachmentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
