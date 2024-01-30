@class NSArray;

@interface SeymourUI.TVSessionWatchDiscoveryView : UIView {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ spinnerView;
    void /* unknown type, empty encoding */ lookingLabel;
    void /* unknown type, empty encoding */ checkLabel;
    void /* unknown type, empty encoding */ startStandaloneButton;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ connectingView;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didTapStartStandaloneButton;

@end
