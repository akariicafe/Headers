@class UIScene, NSString, UIWindowScene;
@protocol UIScreenshotServiceDelegate;

@interface UIScreenshotService : NSObject <_UISceneComponentProviding>

@property (weak, nonatomic) id<UIScreenshotServiceDelegate> privateDelegate;
@property (weak, nonatomic) id<UIScreenshotServiceDelegate> delegate;
@property (readonly, weak, nonatomic) UIWindowScene *windowScene;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithScene:(id)a0;

@end
