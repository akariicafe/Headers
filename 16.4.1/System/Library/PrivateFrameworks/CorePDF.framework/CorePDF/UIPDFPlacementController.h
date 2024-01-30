@class NSMutableArray, UIPDFPageView;

@interface UIPDFPlacementController : NSObject {
    NSMutableArray *_popups;
    struct CGSize { double width; double height; } _viewSize;
}

@property (nonatomic) UIPDFPageView *pageView;

- (void)dealloc;
- (id)viewAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForObjectAtIndex:(unsigned long long)a0;
- (id)initWithAnnotations:(id)a0 viewSize:(struct CGSize { double x0; double x1; })a1;
- (void)layoutViews:(double)a0;
- (void)shift:(double)a0;
- (double)yForObjectAtIndex:(unsigned long long)a0;

@end
