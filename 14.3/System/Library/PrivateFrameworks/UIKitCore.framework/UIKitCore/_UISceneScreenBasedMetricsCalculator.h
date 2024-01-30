@class NSString, UIWindowScene;

@interface _UISceneScreenBasedMetricsCalculator : NSObject <_UISceneMetricsCalculating>

@property (weak, nonatomic, setter=_setScene:) UIWindowScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_updateMetricsOnWindows:(id)a0 animated:(BOOL)a1;

@end
