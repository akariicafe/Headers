@protocol _UISEGestureFeatureSettings, _UISETouchedEdgesProvider;

@interface _UISEOrthogonalHysteresisGestureFeature : _UISEGestureFeature {
    id<_UISEGestureFeatureSettings> _settings;
    id<_UISETouchedEdgesProvider> _provider;
    struct CGPoint { double x; double y; } _initialLocation;
    double _initialTimestamp;
}

- (void).cxx_destruct;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { unsigned long long x0; unsigned long long x1; BOOL x2; long long x3; unsigned long long x4; struct CGPoint { double x0; double x1; } x5; double x6; } *)a0;
- (id)initWithSettings:(id)a0 touchedEdgesProvider:(id)a1;

@end
