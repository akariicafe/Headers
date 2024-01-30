@class UIButton, UIImage, NSString;
@protocol WFVariableConfigurationHeaderViewDelegate;

@interface WFVariableConfigurationHeaderView : UIView

@property (weak, nonatomic) UIButton *titleButton;
@property (weak, nonatomic) UIButton *typeButton;
@property (retain, nonatomic) UIImage *variableIcon;
@property (copy, nonatomic) NSString *variableTitle;
@property (copy, nonatomic) NSString *variableType;
@property (nonatomic) BOOL showsVariableType;
@property (weak, nonatomic) id<WFVariableConfigurationHeaderViewDelegate> delegate;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)typeButtonTapped;

@end
