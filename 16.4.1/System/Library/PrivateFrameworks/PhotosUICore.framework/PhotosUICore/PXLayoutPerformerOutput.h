@interface PXLayoutPerformerOutput : NSObject {
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_layoutRects;
    long long _capacity;
    long long _lastIndex;
}

@property (readonly, nonatomic) long long count;

- (id)initWithCapacity:(long long)a0;
- (void)dealloc;
- (void)appendLayoutRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutRectAtIndex:(long long)a0;
- (void)removeAllRects;

@end
