@class LPCaptionButtonPresentationProperties, LPButtonStyle, UIButton;

@interface LPCaptionBarButtonView : LPComponentView {
    LPCaptionButtonPresentationProperties *_properties;
    LPButtonStyle *_style;
    UIButton *_button;
    UIButton *_collapsedButton;
}

@property (nonatomic, getter=isCollapsed) BOOL collapsed;

- (void)removeTarget:(id)a0 action:(SEL)a1;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)_createButton;
- (struct CGSize { double x0; double x1; })collapsedSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHost:(id)a0;
- (void)layoutComponentView;
- (id)initWithHost:(id)a0 properties:(id)a1 style:(id)a2;
- (id)_createCollapsedButton;

@end
