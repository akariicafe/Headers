@class OFUIViewController, NSMutableArray;

@interface OFUIScrollView : UIScrollView {
    NSMutableArray *_draggingPasteboardTypes;
}

@property (nonatomic) OFUIViewController *viewControllerProxy;

- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)registerDraggingPasteboardType:(id)a0;
- (void)unregisterAllDraggingPasteboardType;
- (id)draggingPasteboardTypes;

@end
