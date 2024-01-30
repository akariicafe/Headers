@class UIStackView, NSArray, UIActivityIndicatorView, NSLayoutConstraint, UILabel, UIButton;

@interface PXPeopleStatusView : UIView

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSLayoutConstraint *stackViewY;
@property (retain, nonatomic) NSLayoutConstraint *continueButtonBottom;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *countLabel;
@property (readonly, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIButton *continueButton;
@property (nonatomic) unsigned long long viewState;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;

- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_createViews;
- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithCoder:(id)a0;

@end
