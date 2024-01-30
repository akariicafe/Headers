@interface MagnifierSupport.DetectionModeView : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ kRecordButtonSize;
    void /* unknown type, empty encoding */ kRecordButtonMargin;
    void /* unknown type, empty encoding */ kTapToRadarButtonMargin;
    void /* unknown type, empty encoding */ kTapToRadarButtonSize;
    void /* unknown type, empty encoding */ kRestartButtonSize;
    void /* unknown type, empty encoding */ kDebugButtonsBottom;
    void /* unknown type, empty encoding */ kSafeAreaBottom;
    void /* unknown type, empty encoding */ _recordButton;
    void /* unknown type, empty encoding */ _tapToRadarButton;
    void /* unknown type, empty encoding */ _restartButton;
    void /* unknown type, empty encoding */ edgeInsets;
    void /* unknown type, empty encoding */ _rotationSubscription;
    void /* unknown type, empty encoding */ buttonMap;
    void /* unknown type, empty encoding */ buttonColumn;
    void /* unknown type, empty encoding */ captionLabel;
    void /* unknown type, empty encoding */ detectionLabel;
    void /* unknown type, empty encoding */ detectionMarqueeLabel;
    void /* unknown type, empty encoding */ kDetectionFont;
    void /* unknown type, empty encoding */ detectionControls;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_accessibilitySupplementaryFooterViews;
- (void)didTapRecordButton:(id)a0;
- (void)didTapRestartButton:(id)a0;
- (void)didTapTapToRadarButton:(id)a0;

@end
