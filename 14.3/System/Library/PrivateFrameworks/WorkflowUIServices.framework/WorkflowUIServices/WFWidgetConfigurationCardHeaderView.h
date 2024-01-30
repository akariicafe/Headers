@class UIStackView, NSLayoutConstraint, UILabel, UIButton;
@protocol WFWidgetConfigurationCardHeaderViewDelegate;

@interface WFWidgetConfigurationCardHeaderView : UIView

@property (readonly, nonatomic) NSLayoutConstraint *bottomAreaHeightConstraint;
@property (readonly, nonatomic) UIStackView *labelsStackView;
@property (readonly, nonatomic) UIButton *closeButton;
@property (nonatomic) double widgetDescriptionTallScriptCompensatedSpacing;
@property (weak, nonatomic) id<WFWidgetConfigurationCardHeaderViewDelegate> delegate;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) UILabel *subtitleLabel;

- (id)initWithRequest:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithIcon:(id)a0 title:(id)a1 subtitle:(id)a2;

@end
