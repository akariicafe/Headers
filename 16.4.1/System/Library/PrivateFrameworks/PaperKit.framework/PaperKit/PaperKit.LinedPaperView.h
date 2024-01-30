@interface PaperKit.LinedPaperView : UIView <PKLinedPaperLayerDelegate> {
    void /* unknown type, empty encoding */ linedPaperLayer;
    void /* unknown type, empty encoding */ linedPaper;
}

@property (nonatomic) void /* unknown type, empty encoding */ drawingTransform;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)linedPaperLayerTraitCollection:(id)a0;
- (id)linedPaperLayerAttachmentContainerView:(id)a0;
- (id)linedPaperLayerLinedPaper:(id)a0;

@end
