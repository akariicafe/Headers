@class UIColor;

@interface STStorageProgressView : UIView {
    UIColor *_grayColor;
    UIColor *_blueColor;
    double _percent;
}

@property double percent;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateColors;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;

@end
