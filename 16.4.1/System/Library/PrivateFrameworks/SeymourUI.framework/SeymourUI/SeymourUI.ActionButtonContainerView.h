@interface SeymourUI.ActionButtonContainerView : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ templateBuilder;
    void /* unknown type, empty encoding */ templateParser;
    void /* unknown type, empty encoding */ viewFactory;
    void /* unknown type, empty encoding */ buttonActions;
    void /* unknown type, empty encoding */ interGroupSpacing;
    void /* unknown type, empty encoding */ interItemSpacing;
    void /* unknown type, empty encoding */ rootStackView;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)actionButtonTapped:(id)a0;

@end
