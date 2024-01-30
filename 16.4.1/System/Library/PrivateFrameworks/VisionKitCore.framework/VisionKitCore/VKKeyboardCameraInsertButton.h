@class UIButton, UIVisualEffectView;

@interface VKKeyboardCameraInsertButton : UIView {
    UIButton *_button;
    UIVisualEffectView *_effectView;
}

@property (readonly, nonatomic) UIButton *uiButton;

- (BOOL)isEnabled;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setEnabled:(BOOL)a0;
- (id)viewForFirstBaselineLayout;
- (void).cxx_destruct;
- (id)initWithPrimaryAction:(id)a0;

@end
