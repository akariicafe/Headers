@class IKViewElement;

@interface _TVZoomableTextView : TVFocusableTextView {
    double _maxHeight;
    double _maxWidth;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (nonatomic) struct CGSize { double width; double height; } cachedSizeThatFits;
@property (nonatomic) struct CGSize { double width; double height; } previousTargetSize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_clearCachedValues;
- (void)updateWithViewElement:(id)a0;

@end
