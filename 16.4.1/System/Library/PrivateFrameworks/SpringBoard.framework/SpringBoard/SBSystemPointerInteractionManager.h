@class NSString, NSMapTable, NSHashTable, UIView, SBWindowScene, SBMultiDisplayUserInteractionCoordinator;

@interface SBSystemPointerInteractionManager : NSObject <SBMultiDisplayPointerInteractionObserver, UIPointerInteractionDelegate> {
    NSMapTable *_registeredViewsToDelegates;
    NSHashTable *_observers;
    SBMultiDisplayUserInteractionCoordinator *_multiDisplayUserInteractionCoordinator;
}

@property (readonly, nonatomic) UIView *activePointerRegionView;
@property (readonly, weak, nonatomic) SBWindowScene *activePointerWindowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pointerDidMoveToFromWindowScene:(id)a0 toWindowScene:(id)a1;
- (void)pointerInteraction:(id)a0 window:(id)a1 willExitRegion:(id)a2 animator:(id)a3;
- (void)addObserver:(id)a0;
- (id)pointerInteraction:(id)a0 window:(id)a1 regionForRequest:(id)a2 defaultRegion:(id)a3;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)registerView:(id)a0 delegate:(id)a1;
- (id)initWithMultiDisplayUserInteractionCoordinator:(id)a0;
- (BOOL)isViewRegistered:(id)a0;
- (void)unregisterView:(id)a0;
- (id)pointerInteraction:(id)a0 window:(id)a1 styleForRegion:(id)a2;
- (void)pointerInteraction:(id)a0 window:(id)a1 willEnterRegion:(id)a2 animator:(id)a3;
- (void).cxx_destruct;

@end
