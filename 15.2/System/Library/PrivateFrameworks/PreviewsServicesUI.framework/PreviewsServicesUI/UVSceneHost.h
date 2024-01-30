@class NSString;
@protocol UIScenePresenter;

@interface UVSceneHost : UIView {
    NSString *_hostIdentifier;
    id<UIScenePresenter> _scenePresenter;
    BOOL _invalidated;
}

+ (id)createWithInjectedScene:(id)a0 error:(id *)a1;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)_initWithHostIdentifier:(id)a0 scenePresenter:(id)a1;

@end
