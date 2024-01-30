@class NSArray, NSString, NSMutableIndexSet;

@interface _UISEAllGestureFeature : _UISEGestureFeature <_UISEGestureFeatureDelegate> {
    NSMutableIndexSet *_unrecognizedIndexes;
}

@property (readonly, nonatomic) NSArray *subfeatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)featureDidChangeState:(id)a0;
- (void).cxx_destruct;
- (id)initWithSubfeatures:(id)a0;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { unsigned long long x0; unsigned long long x1; BOOL x2; long long x3; unsigned long long x4; struct CGPoint { double x0; double x1; } x5; double x6; } *)a0;
- (id)debugDictionary;

@end
