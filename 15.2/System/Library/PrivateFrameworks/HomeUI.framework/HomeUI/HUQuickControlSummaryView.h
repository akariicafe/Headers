@class UIStackView, NSString, NSAttributedString, UIImage, UIImageView, NSMutableArray, UIVisualEffectView, UILabel, HUIconView;

@interface HUQuickControlSummaryView : UIView

@property (retain, nonatomic) NSMutableArray *contentConstraints;
@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) UIVisualEffectView *secondaryLabelEffectView;
@property (retain, nonatomic) UIStackView *verticalStackView;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSAttributedString *microphoneStatusText;
@property (readonly, nonatomic) HUIconView *iconView;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImageView *imageView;

+ (BOOL)requiresConstraintBasedLayout;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;

@end
