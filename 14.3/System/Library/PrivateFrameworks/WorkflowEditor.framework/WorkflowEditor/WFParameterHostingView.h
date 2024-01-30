@interface WFParameterHostingView : UIView {
    void /* unknown type, empty encoding */ hostingController;
    void /* unknown type, empty encoding */ initialState;
    void /* unknown type, empty encoding */ updatedState;
}

+ (BOOL)supportsParameterClass:(Class)a0;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)configureViewWithParameter:(id)a0 state:(id)a1 editable:(BOOL)a2 processing:(BOOL)a3 shouldFocus:(BOOL)a4 variableProvider:(id)a5 variableUIDelegate:(id)a6 updateBlock:(id /* block */)a7;
- (void)attachToParentViewController:(id)a0;
- (void)detachFromParentViewController;

@end
