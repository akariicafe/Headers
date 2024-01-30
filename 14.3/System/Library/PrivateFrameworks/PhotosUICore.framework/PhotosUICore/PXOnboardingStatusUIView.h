@class UIProgressView, NSArray, NSString, UILabel;

@interface PXOnboardingStatusUIView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIProgressView *progressView;
@property (retain, nonatomic) NSArray *constraints;
@property (nonatomic) double progress;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *descriptionText;

- (void).cxx_destruct;
- (void)commonInit;
- (void)updateConstraints;
- (id)initWithCoder:(id)a0;
- (void)_createViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
