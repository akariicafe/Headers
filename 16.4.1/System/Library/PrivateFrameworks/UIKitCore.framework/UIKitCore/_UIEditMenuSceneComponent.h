@class UIScene, NSString, _UIEditMenuPresentation;

@interface _UIEditMenuSceneComponent : NSObject <_UISceneComponentProviding>

@property (readonly, nonatomic) _UIEditMenuPresentation *activePresentation;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sceneComponentForView:(id)a0;

- (id)initWithScene:(id)a0;
- (void)setActivePresentation:(id)a0;
- (BOOL)hasVisibleMenu;
- (void)removeActivePresentation:(id)a0;
- (void)dismissCurrentMenu;
- (void).cxx_destruct;

@end
