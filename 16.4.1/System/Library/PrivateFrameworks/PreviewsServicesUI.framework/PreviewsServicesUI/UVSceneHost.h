@class UVInjectedScene, NSString;
@protocol UIScenePresenter;

@interface UVSceneHost : UIView {
    NSString *_hostIdentifier;
    id<UIScenePresenter> _scenePresenter;
    BOOL _invalidated;
}

@property (readonly, weak, nonatomic) UVInjectedScene *injectedScene;

+ (id)createWithInjectedScene:(id)a0 error:(id *)a1;

- (void)dealloc;
- (void)layoutSubviews;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_initWithHostIdentifier:(id)a0 scenePresenter:(id)a1 injectedScene:(id)a2;

@end
