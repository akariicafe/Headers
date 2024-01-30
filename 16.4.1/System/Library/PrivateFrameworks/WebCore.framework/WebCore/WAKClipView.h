@class WAKView;

@interface WAKClipView : WAKView

@property (readonly, nonatomic) WAKView *documentView;
@property (nonatomic) BOOL copiesOnScroll;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)_setDocumentView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })documentVisibleRect;

@end
