@class UIScene, NSString, NSMutableArray;

@interface UIAlertControllerStackManager : NSObject <_UISceneComponentProviding> {
    NSMutableArray *_alertControllerStack;
    NSMutableArray *_hiddenAlertControllers;
}

@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addAlertControllerToStack:(id)a0;
- (id)initWithScene:(id)a0;
- (void)_removeAlertControllerFromStack:(id)a0;
- (void)_didHideAlertController:(id)a0;
- (void)_hideStackedAlertControllers;
- (void)_alertControllerDidDisappear:(id)a0;
- (long long)_alertControllerStackCount;
- (void)_willHideAlertController:(id)a0;
- (BOOL)_alertControllerShouldBeTrackedInStack:(id)a0;
- (void)_alertControllerDidAppear:(id)a0;
- (void)_alertControllerWillAppear:(id)a0;
- (void)_showHiddenStackedAlertControllers;
- (id)_topAlertControllerInStack;
- (void).cxx_destruct;
- (void)_alertControllerWillDisappear:(id)a0;
- (void)_willShowAlertController:(id)a0;

@end
