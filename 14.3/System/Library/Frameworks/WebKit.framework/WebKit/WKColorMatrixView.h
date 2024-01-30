@protocol WKColorMatrixViewDelegate;

@interface WKColorMatrixView : UIView {
    struct RetainPtr<NSArray<NSArray<UIColor *> *> > { void *m_ptr; } _colorMatrix;
    struct RetainPtr<NSArray<NSArray<WKColorButton *> *> > { void *m_ptr; } _colorButtons;
}

@property (weak, nonatomic) id<WKColorMatrixViewDelegate> delegate;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 colorMatrix:(id)a1;
- (void)colorButtonTapped:(id)a0;

@end
