@class UIView, NSString, NSArray, UIImageView, NSDictionary, UIButton, UIVisualEffectView, UILabel;
@protocol HUDashboardNavigationViewDelegate;

@interface HUDashboardNavigationView : UIView

@property (retain, nonatomic) UIVisualEffectView *headerTitleLabelEffectView;
@property (retain, nonatomic) UILabel *headerTitleLabel;
@property (retain, nonatomic) UIButton *titleButton;
@property (retain, nonatomic) UIVisualEffectView *titleButtonEffectView;
@property (retain, nonatomic) UIButton *homeAppButton;
@property (retain, nonatomic) UIVisualEffectView *separatorEffectView;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) NSDictionary *largeTitleTextAttributes;
@property (retain, nonatomic) NSArray *allConstraints;
@property (retain, nonatomic) NSString *headerTitle;
@property (retain, nonatomic) NSString *title;
@property (weak, nonatomic) id<HUDashboardNavigationViewDelegate> delegate;
@property (readonly, nonatomic) UIImageView *chevronImageView;

+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_didTapLargeTitleButton:(id)a0;
- (void)_didTapHomeAppButton:(id)a0;
- (void)_rotateChevronButtonToAngle:(double)a0;
- (void)rotateChevronUp;
- (void)rotateChevronDown;

@end
