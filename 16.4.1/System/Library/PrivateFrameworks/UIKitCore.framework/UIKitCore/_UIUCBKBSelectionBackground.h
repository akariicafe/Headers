@class UIView;

@interface _UIUCBKBSelectionBackground : UIView {
    UIView *_backgroundProvidingView;
}

@property (nonatomic) BOOL showButtonShape;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateBackgroundProvidingView;

@end
