@class NSString, UIImageView, UIImage, NSArray, _MKUILabel, UITapGestureRecognizer;

@interface _MKRightImageButton : UIControl {
    UITapGestureRecognizer *_gestureRecognizer;
    BOOL _titleConstraintsAdded;
    NSArray *_titleOnlyConstraints;
    NSArray *_titleAndImageConstraints;
    BOOL _highlighted;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) _MKUILabel *titleLabel;
@property (readonly, nonatomic) UIImageView *imageView;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)viewForLastBaselineLayout;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (BOOL)isHighlighted;
- (void)setTarget:(id)a0 action:(SEL)a1;

@end
