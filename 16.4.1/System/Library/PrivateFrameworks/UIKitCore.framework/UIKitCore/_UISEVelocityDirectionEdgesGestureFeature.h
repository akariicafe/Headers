@protocol _UISEGestureFeatureSettings, _UISETouchedEdgesProvider;

@interface _UISEVelocityDirectionEdgesGestureFeature : _UISEGestureFeature <_UISETouchedEdgesProvider> {
    id<_UISEGestureFeatureSettings> _settings;
    id<_UISETouchedEdgesProvider> _provider;
    BOOL _exactMatchEdges;
    struct CGPoint { double x; double y; } _initialLocation;
}

@property (readonly, nonatomic) unsigned long long touchedEdges;

- (id)debugDictionary;
- (id)initWithSettings:(id)a0 touchedEdgesProvider:(id)a1 exactMatchEdges:(BOOL)a2;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { unsigned long long x0; unsigned long long x1; BOOL x2; long long x3; unsigned long long x4; struct CGPoint { double x0; double x1; } x5; double x6; } *)a0;
- (void).cxx_destruct;

@end
