@class OFUIViewController, NSMutableArray;

@interface OFUIScrollView : UIScrollView {
    NSMutableArray *_draggingPasteboardTypes;
}

@property (nonatomic) OFUIViewController *viewControllerProxy;

- (void)commonInit;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)registerDraggingPasteboardType:(id)a0;
- (void)unregisterAllDraggingPasteboardType;
- (id)draggingPasteboardTypes;

@end
