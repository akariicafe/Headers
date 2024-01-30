@class NSArray;

@interface SeymourUI.TVSessionInstructionsView : UIView {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ imageView;
    void /* unknown type, empty encoding */ workoutTitleLabel;
    void /* unknown type, empty encoding */ workoutDetailLabel;
    void /* unknown type, empty encoding */ gymKitLabel;
    void /* unknown type, empty encoding */ gymKitConnectingView;
    void /* unknown type, empty encoding */ gymKitConnectedView;
    void /* unknown type, empty encoding */ startWorkoutView;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ topOffest;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)startButtonTapped;

@end
