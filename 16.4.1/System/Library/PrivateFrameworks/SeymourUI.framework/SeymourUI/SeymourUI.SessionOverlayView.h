@interface SeymourUI.SessionOverlayView : UIView {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ contentLayoutGuide;
    void /* unknown type, empty encoding */ unobscuredLayoutGuide;
    void /* unknown type, empty encoding */ burnBarView;
    void /* unknown type, empty encoding */ energyView;
    void /* unknown type, empty encoding */ distanceView;
    void /* unknown type, empty encoding */ progressView;
    void /* unknown type, empty encoding */ heartRateView;
    void /* unknown type, empty encoding */ ringsView;
    void /* unknown type, empty encoding */ timerView;
    void /* unknown type, empty encoding */ metricContainer;
    void /* unknown type, empty encoding */ multiUserCelebrationView;
    void /* unknown type, empty encoding */ trackView;
    void /* unknown type, empty encoding */ highlightPlatter;
    void /* unknown type, empty encoding */ highlightLabel;
    void /* unknown type, empty encoding */ inclineView;
    void /* unknown type, empty encoding */ intensityView;
    void /* unknown type, empty encoding */ rpmView;
    void /* unknown type, empty encoding */ spmView;
    void /* unknown type, empty encoding */ separatorView;
    void /* unknown type, empty encoding */ activeConstraints;
    void /* unknown type, empty encoding */ trackViewRightConstraint;
    void /* unknown type, empty encoding */ multiUserCelebrationViewRightConstraint;
    void /* unknown type, empty encoding */ overlayLayoutGuide;
    void /* unknown type, empty encoding */ notchInset;
    void /* unknown type, empty encoding */ oldOrientation;
    void /* unknown type, empty encoding */ onNotchSide;
    void /* unknown type, empty encoding */ elementViewMap;
    void /* unknown type, empty encoding */ overlayLayoutGuideTop;
    void /* unknown type, empty encoding */ overlayLayoutGuideBottom;
    void /* unknown type, empty encoding */ overlayLayoutGuideLeft;
    void /* unknown type, empty encoding */ overlayLayoutGuideRight;
}

- (void)updateConstraints;
- (id)initWithCoder:(id)a0;
- (void)safeAreaInsetsDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)a0;
- (void).cxx_destruct;

@end
