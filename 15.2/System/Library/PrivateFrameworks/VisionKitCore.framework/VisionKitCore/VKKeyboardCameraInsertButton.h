@class UIButton, UIVisualEffectView;

@interface VKKeyboardCameraInsertButton : UIView {
    UIButton *_button;
    UIVisualEffectView *_effectView;
}

@property (readonly, nonatomic) UIButton *uiButton;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)viewForFirstBaselineLayout;
- (void)setEnabled:(BOOL)a0;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (id)initWithPrimaryAction:(id)a0;

@end
