@class NSString, LPButtonStyle, UIButton;

@interface LPCaptionBarButtonView : LPComponentView {
    NSString *_caption;
    LPButtonStyle *_style;
    UIButton *_button;
}

- (void)removeTarget:(id)a0 action:(SEL)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCaption:(id)a0 style:(id)a1;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)layoutComponentView;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
