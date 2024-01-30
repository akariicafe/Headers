@class UIWindow, NSString, NSMapTable, UIView, UIPointerInteraction;

@interface SBSystemPointerInteractionManager : NSObject <UIPointerInteractionDelegate> {
    UIPointerInteraction *_pointerInteraction;
    NSMapTable *_registeredViewsToDelegates;
}

@property (readonly, nonatomic) UIWindow *window;
@property (readonly, nonatomic) UIView *activePointerRegionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerView:(id)a0 delegate:(id)a1;
- (void)unregisterView:(id)a0;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (id)initWithPointerInteractionWindow:(id)a0;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;

@end
