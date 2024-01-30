@interface WeatherMaps.WeatherMapSnapshotView : UIView {
    void /* unknown type, empty encoding */ annotationViewModelFactory;
    void /* unknown type, empty encoding */ mapLocationAccessibilityModelManager;
    void /* unknown type, empty encoding */ overlaySonifier;
    void /* unknown type, empty encoding */ snapshotManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_showDebugConsole;
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ snapshotDisplayView;
    void /* unknown type, empty encoding */ borderLayer;
    void /* unknown type, empty encoding */ annotationView;
    void /* unknown type, empty encoding */ annotationViewFractionalCenter;
    void /* unknown type, empty encoding */ debugLabel;
    void /* unknown type, empty encoding */ errorLabelEffect;
    void /* unknown type, empty encoding */ errorEffectView;
    void /* unknown type, empty encoding */ errorLabel;
    void /* unknown type, empty encoding */ errorPlatterView;
    void /* unknown type, empty encoding */ loadingIndicator;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ isTransitioningToSnapshotView;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

- (id)initWithCoder:(id)a0;
- (void)willTransitionToSnapshotMap:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didTransitionToSnapshotMap:(id)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
