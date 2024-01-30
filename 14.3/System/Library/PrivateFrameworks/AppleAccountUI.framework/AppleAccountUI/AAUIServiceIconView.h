@class NSArray, UIStackView;

@interface AAUIServiceIconView : UIView {
    UIStackView *_stackView;
}

@property (class, readonly, nonatomic) NSArray *iconNames;

- (void)_updateStackViewSpacing;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;

@end
