@class TVRUIButton, UILabel;
@protocol TVRUIStyleProvider, _TVRUIEventDelegate;

@interface TVRUIPagingButton : UIView

@property (retain, nonatomic) TVRUIButton *topButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) TVRUIButton *bottomButton;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (weak, nonatomic) id<_TVRUIEventDelegate> buttonEventDelegate;
@property (nonatomic, getter=isEnabled) BOOL enabled;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)a0;
- (void)_buttonReleased:(id)a0;
- (void)_darkenSystemColorsChanged:(id)a0;
- (id)initWithTitle:(id)a0 styleProvider:(id)a1;

@end
