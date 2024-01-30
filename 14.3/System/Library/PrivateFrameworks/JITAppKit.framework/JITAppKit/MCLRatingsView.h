@class UIImage, NSLayoutConstraint;

@interface MCLRatingsView : UIView {
    double _imageaspect;
    NSLayoutConstraint *_widthConstraint;
}

@property (nonatomic) double spacing;
@property (nonatomic) double value;
@property (retain, nonatomic) UIImage *emptyImage;
@property (retain, nonatomic) UIImage *fullImage;
@property (nonatomic) BOOL actionVariant;

- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
