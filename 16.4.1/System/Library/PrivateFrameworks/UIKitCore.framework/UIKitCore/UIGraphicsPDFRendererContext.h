@interface UIGraphicsPDFRendererContext : UIGraphicsRendererContext

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } documentBounds;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pageBounds;
@property BOOL inPage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } pdfContextBounds;

- (void)setURL:(id)a0 forRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)beginPageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageInfo:(id)a1;
- (void)beginPage;
- (void)setDestinationWithName:(id)a0 forRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)addDestinationWithName:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)updateAuxInfo:(id)a0;

@end
