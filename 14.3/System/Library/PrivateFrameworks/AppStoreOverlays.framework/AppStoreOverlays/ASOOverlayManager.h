@class UIScene, NSString, ASOOverlayViewController, ASOOverlayWindow;

@interface ASOOverlayManager : NSObject <_UISceneComponentProviding>

@property (readonly, retain, nonatomic) ASOOverlayWindow *window;
@property (retain, nonatomic) ASOOverlayViewController *viewController;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithScene:(id)a0;
- (id)initWithWindowScene:(id)a0;
- (void)presentOverlay:(id)a0;
- (void)dismissOverlay;
- (id)makeViewControllerIfNeeded;

@end
