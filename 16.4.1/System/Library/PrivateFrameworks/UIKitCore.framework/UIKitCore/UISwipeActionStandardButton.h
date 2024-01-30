@interface UISwipeActionStandardButton : UISwipeActionButton {
    double _buttonWidth;
    struct { unsigned char isInLayoutSubviews : 1; } _flags;
}

@property (nonatomic) double extensionLength;

- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)titleLabel;
- (void)layoutSubviews;
- (double)buttonWidth;

@end
