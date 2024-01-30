@class UILabel, UIView;

@interface _NCContentUnavailableViewWithButton : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *backgroundView;
@property (copy, nonatomic) id /* block */ buttonHandler;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)didMoveToWindow;
- (id)_visualStylingProviderForCategory:(long long)a0;
- (void)_updateVisualStyling;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (void)_configureBackgroundView;
- (void)_configureTitleLabelWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 buttonAction:(id /* block */)a1;

@end
