@class NSArray;

@interface SeymourUI.TVSummaryFooterView : UIView {
    void /* unknown type, empty encoding */ doneButton;
    void /* unknown type, empty encoding */ cooldownButton;
    void /* unknown type, empty encoding */ onDoneButtonTap;
    void /* unknown type, empty encoding */ onCooldownButtonTap;
    void /* unknown type, empty encoding */ focusedView;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)doneButtonTapped;
- (void)cooldownButtonTapped;

@end
