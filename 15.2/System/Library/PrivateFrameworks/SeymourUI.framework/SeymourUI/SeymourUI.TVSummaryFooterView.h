@class NSArray;

@interface SeymourUI.TVSummaryFooterView : UIView {
    void /* unknown type, empty encoding */ doneButton;
    void /* unknown type, empty encoding */ cooldownButton;
    void /* unknown type, empty encoding */ onDoneButtonTap;
    void /* unknown type, empty encoding */ onCooldownButtonTap;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)doneButtonTapped;
- (void)cooldownButtonTapped;

@end
