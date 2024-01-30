@class WFRowOfIconsView, UILabel, UIStackView;

@interface WFAutomationNotificationContentView : UIView

@property (readonly, nonatomic) UIStackView *stackView;
@property (readonly, nonatomic) WFRowOfIconsView *actionIconsView;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *descriptionLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUIFromNotification:(id)a0;

@end
