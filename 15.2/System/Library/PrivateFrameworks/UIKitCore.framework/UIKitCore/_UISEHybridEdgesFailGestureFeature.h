@class NSArray, NSString;

@interface _UISEHybridEdgesFailGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate, _UISETouchedEdgesProvider> {
    unsigned long long _fails;
}

@property (readonly, nonatomic) unsigned long long touchedEdges;
@property (readonly, nonatomic) NSArray *subfeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)featureDidChangeState:(id)a0;
- (void).cxx_destruct;
- (id)initWithSubfeatures:(id)a0;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { } *)a0;
- (id)debugDictionary;

@end
