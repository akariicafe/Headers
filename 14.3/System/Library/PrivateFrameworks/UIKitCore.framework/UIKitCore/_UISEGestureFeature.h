@protocol _UISEGestureFeatureDelegate;

@interface _UISEGestureFeature : NSObject

@property (weak, nonatomic) id<_UISEGestureFeatureDelegate> delegate;
@property (readonly, nonatomic) unsigned long long state;

- (void)_setState:(unsigned long long)a0;
- (id)debugDictionary;
- (void).cxx_destruct;
- (void)_incorporateSample:(const struct _UISEGestureFeatureSample { } *)a0;
- (void)incorporateSample:(const struct _UISEGestureFeatureSample { } *)a0;

@end
