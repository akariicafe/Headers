@interface ConversationKit.CountdownAlertView : UIView {
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ circleView;
    void /* unknown type, empty encoding */ numberLabel;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ dividerView;
    void /* unknown type, empty encoding */ stopButton;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ newTimer;
    void /* unknown type, empty encoding */ stoppedTimer;
}

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)cancel;

@end
