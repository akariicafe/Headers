@class UIImageView, UIImage, NSMutableArray, UIButton;

@interface STSResultDetailFooter : UIView {
    UIImageView *_providerIconView;
    NSMutableArray *_constraints;
}

@property (nonatomic) struct CGSize { double width; double height; } providerIconSize;
@property (retain, nonatomic) UIImage *providerIcon;
@property (readonly, nonatomic) UIButton *providerButton;
@property (readonly, nonatomic) UIButton *sendButton;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;

@end
