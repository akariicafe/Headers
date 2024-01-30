@class NSAttributedString, NSString, UIImageView, UILabel, NSLayoutConstraint, UIView;

@interface CACBannerView : UIView

@property (retain, nonatomic) NSLayoutConstraint *imageToTextConstraint;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *accessoryImageView;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSAttributedString *attributedText;
@property (retain, nonatomic) NSString *symbolImage;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 forEvent:(struct __GSEvent { } *)a1;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
