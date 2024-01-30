@class WAKView;

@interface WAKClipView : WAKView

@property (readonly, nonatomic) WAKView *documentView;
@property (nonatomic) BOOL copiesOnScroll;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })documentVisibleRect;
- (void)_setDocumentView:(id)a0;

@end
