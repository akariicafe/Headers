@class NSString, NSMutableDictionary;
@protocol _UISEGestureFeatureSettings;

@interface _UISEMuxGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate> {
    id<_UISEGestureFeatureSettings> _settings;
    id /* block */ _createFeatureBlock;
    unsigned long long _fails;
    unsigned long long _recognizes;
}

@property (readonly, nonatomic) NSMutableDictionary *subfeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugDictionary;
- (id)initWithSettings:(id)a0 createFeatureBlock:(id /* block */)a1;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { unsigned long long x0; unsigned long long x1; BOOL x2; long long x3; unsigned long long x4; struct CGPoint { double x0; double x1; } x5; double x6; } *)a0;
- (void)featureDidChangeState:(id)a0;
- (void).cxx_destruct;

@end
