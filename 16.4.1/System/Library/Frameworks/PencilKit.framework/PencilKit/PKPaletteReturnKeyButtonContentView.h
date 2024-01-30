@class UIColor, NSString, UIImageView, UIStackView, TUICandidateLabel, NSLayoutConstraint;

@interface PKPaletteReturnKeyButtonContentView : UIView {
    UIStackView *_stackView;
    TUICandidateLabel *_label;
    NSLayoutConstraint *_labelHeightConstraint;
    NSLayoutConstraint *_labelWidthConstraint;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) long long layoutOrientation;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL useCompactLayout;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateUI;

@end
