@interface MagnifierSupport.DetectedPersonView : UIView {
    void /* unknown type, empty encoding */ isDepthHidden;
    void /* unknown type, empty encoding */ edgeInsets;
    void /* unknown type, empty encoding */ isCenterDetectionEnabled;
    void /* unknown type, empty encoding */ noDetectionMessage;
    void /* unknown type, empty encoding */ kTargetPositionArrayMaxSize;
    void /* unknown type, empty encoding */ kFirstPointDepth;
    void /* unknown type, empty encoding */ kDimmingFactor;
    void /* unknown type, empty encoding */ kDepthLabelViewOpacity;
    void /* unknown type, empty encoding */ kNoDetectionFont;
    void /* unknown type, empty encoding */ kSafeAreaBottom;
    void /* unknown type, empty encoding */ kSafeAreaTop;
    void /* unknown type, empty encoding */ kSafeAreaLeft;
    void /* unknown type, empty encoding */ kSafeAreaRight;
    void /* unknown type, empty encoding */ _positionLabel;
    void /* unknown type, empty encoding */ _dottedLineLabel;
    void /* unknown type, empty encoding */ _depthLabelView;
    void /* unknown type, empty encoding */ _depthLabel;
    void /* unknown type, empty encoding */ _previousTargetPoint;
    void /* unknown type, empty encoding */ _currentTargetPoint;
    void /* unknown type, empty encoding */ _nextTargetPoint;
    void /* unknown type, empty encoding */ _targetAnimationDisplayLink;
    void /* unknown type, empty encoding */ _startTargetTime;
    void /* unknown type, empty encoding */ kTargetAnimationDuration;
    void /* unknown type, empty encoding */ _noDetectionLabel;
    void /* unknown type, empty encoding */ _rotationSubscription;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)accessibilityActivate;
- (void)accessibilityElementDidBecomeFocused;
- (id)_accessibilitySupplementaryFooterViews;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (void)updateTargetAnimation;

@end
