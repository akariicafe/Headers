@class UIStackView, UILabel, UIView, NSLayoutConstraint, UIButton;
@protocol WFWidgetConfigurationCardHeaderViewDelegate;

@interface WFWidgetConfigurationCardHeaderView : UIView

@property (readonly, nonatomic) NSLayoutConstraint *bottomAreaHeightConstraint;
@property (readonly, nonatomic) UIStackView *labelsStackView;
@property (readonly, nonatomic) UIView *blendedBorderView;
@property (readonly, nonatomic) UIButton *closeButton;
@property (nonatomic) double widgetDescriptionTallScriptCompensatedSpacing;
@property (weak, nonatomic) id<WFWidgetConfigurationCardHeaderViewDelegate> delegate;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;

- (id)initWithRequest:(id)a0;
- (void)layoutSubviews;
- (void)close;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithIcon:(id)a0 closeButton:(id)a1 title:(id)a2 subtitle:(id)a3;
- (void)updateIconBorderColor;
- (void)updateIconBorderWidth;

@end
