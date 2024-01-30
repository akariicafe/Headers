@class NSString, FBScene, NSMutableDictionary;
@protocol UIScenePresenter;

@interface PRComplicationSceneHostViewController : UIViewController <FBSceneLayerManagerObserver, BSInvalidatable> {
    FBScene *_scene;
    id<UIScenePresenter> _scenePresenter;
    NSMutableDictionary *_touchDeliveryPolicyAssertions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (id)initWithScene:(id)a0;
- (void)sceneLayerManagerDidUpdateLayers:(id)a0;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)sceneLayerManagerDidStartTrackingLayers:(id)a0;
- (void)_clearTouchDeliveryPolicies;
- (void)_updateTouchDeliveryPolicies;

@end
