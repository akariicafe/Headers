@interface SeymourUI.SessionRingsView : UIView {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ onNotchSide;
    void /* unknown type, empty encoding */ shouldTuckToSide;
    void /* unknown type, empty encoding */ currentCelebrations;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ ringsContainer;
    void /* unknown type, empty encoding */ ringsView;
    void /* unknown type, empty encoding */ moveLabel;
    void /* unknown type, empty encoding */ exerciseLabel;
    void /* unknown type, empty encoding */ standLabel;
    void /* unknown type, empty encoding */ metricsContainer;
    void /* unknown type, empty encoding */ metricsPlatter;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ ringClosureLabelView;
    void /* unknown type, empty encoding */ ringClosureLabelPlatter;
    void /* unknown type, empty encoding */ metricBuilder;
    void /* unknown type, empty encoding */ stringBuilder;
    void /* unknown type, empty encoding */ layoutGuideConstraints;
    void /* unknown type, empty encoding */ metricsViewExpandedConstraints;
    void /* unknown type, empty encoding */ metricsViewContractedConstraints;
    void /* unknown type, empty encoding */ ringsContainerTopConstraint;
    void /* unknown type, empty encoding */ ringsContainerRightConstraint;
    void /* unknown type, empty encoding */ ringsContainerWidthConstraint;
    void /* unknown type, empty encoding */ ringsContainerHeightConstraint;
    void /* unknown type, empty encoding */ celebrationLoadingQueue;
    void /* unknown type, empty encoding */ contentLayoutGuide;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ ringsPlatter;

- (void)displayHighlightWithDuration:(double)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
