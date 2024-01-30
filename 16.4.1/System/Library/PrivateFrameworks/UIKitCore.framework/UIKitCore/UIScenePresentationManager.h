@class _UISceneKeyboardProxyLayerForwardingManager, NSString, _UIScenePresenterOwner, NSMapTable, FBScene, UIScenePresentationContext;
@protocol UIScenePresentationManagerDelegate;

@interface UIScenePresentationManager : NSObject <BSDescriptionProviding, _UIScenePresenterOwnerDelegate, FBSceneObserver> {
    _UISceneKeyboardProxyLayerForwardingManager *_keyboardProxyLayerManager;
    _UIScenePresenterOwner *_scenePresenterOwner;
    NSMapTable *_mapLayersToPresenterOwners;
    BOOL _invalidated;
    struct { BOOL defaultPriorityBand; } _delegateFlags;
}

@property (readonly, weak, nonatomic) FBScene *scene;
@property (weak, nonatomic) id<UIScenePresentationManagerDelegate> delegate;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) UIScenePresentationContext *defaultPresentationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sceneHostingGraph;

- (id)_initWithScene:(id)a0;
- (void)ownerDidInvalidateLastPresenter:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)snapshotPresentationForSnapshot:(id)a0;
- (id)createPresenterForLayerTarget:(id)a0 identifier:(id)a1 priority:(long long)a2;
- (id)succinctDescriptionBuilder;
- (void)sceneDidInvalidate:(id)a0;
- (id)_initWithScene:(id)a0 keyboardProxyLayerManager:(id)a1;
- (void)sceneContentStateDidChange:(id)a0;
- (id)snapshotContext;
- (id)createPresenterWithIdentifier:(id)a0;
- (id)createPresenterForLayerTarget:(id)a0 identifier:(id)a1;
- (long long)_defaultPresentationPriority;
- (void)owner:(id)a0 willPrioritizePresenter:(id)a1 deactivatePresenter:(id)a2;
- (id)succinctDescription;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_presenterWithIdentifier:(id)a0;
- (id)createPresenterWithIdentifier:(id)a0 priority:(long long)a1;
- (BOOL)_hasPresenterWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)modifyDefaultPresentationContext:(id /* block */)a0;

@end
