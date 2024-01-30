@class FBScene;
@protocol UIScenePresenter;

@interface PRComplicationsSnapshotSceneHostViewController : UIViewController {
    FBScene *_scene;
    id<UIScenePresenter> _scenePresenter;
}

- (id)initWithScene:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;

@end
