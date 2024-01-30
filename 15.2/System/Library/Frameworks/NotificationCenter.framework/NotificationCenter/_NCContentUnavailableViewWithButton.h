@class UILabel, UIView;

@interface _NCContentUnavailableViewWithButton : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (copy, nonatomic) id /* block */ buttonHandler;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateVisualStyling;
- (id)_visualStylingProviderForCategory:(long long)a0;
- (void)_buttonPressed:(id)a0;
- (void).cxx_destruct;
- (void)_configureBackgroundView;
- (void)didMoveToWindow;
- (id)initWithTitle:(id)a0 buttonAction:(id /* block */)a1;
- (void)_configureTitleLabelWithTitle:(id)a0;

@end
