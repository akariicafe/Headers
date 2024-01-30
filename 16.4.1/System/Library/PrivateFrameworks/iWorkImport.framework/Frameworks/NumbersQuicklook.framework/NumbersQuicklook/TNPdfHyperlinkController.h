@interface TNPdfHyperlinkController : TSAPdfHyperlinkController {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mCanvasRect;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })canvasRect;
- (id)initWithDocumentRoot:(id)a0;
- (id)destinationFromUrl:(id)a0;
- (BOOL)isDestination:(id)a0;
- (void)setCanvasRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
