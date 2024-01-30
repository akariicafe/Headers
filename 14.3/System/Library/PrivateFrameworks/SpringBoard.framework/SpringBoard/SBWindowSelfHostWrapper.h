@class UIWindow, NSString, UIView, UIScenePresentationContext;
@protocol UIScenePresenter, UIScenePresentation;

@interface SBWindowSelfHostWrapper : NSObject

@property (readonly, copy, nonatomic) NSString *requester;
@property (readonly, nonatomic) UIWindow *window;
@property (readonly, nonatomic) UIView<UIScenePresentation> *hostView;
@property (readonly, nonatomic) id<UIScenePresenter> presenter;
@property (readonly, copy, nonatomic) UIScenePresentationContext *presentationContext;

+ (id)wrapperForWindow:(id)a0 orientation:(long long)a1 hostRequester:(id)a2 sceneIdentifier:(id)a3;
+ (id)wrapperForUseInWindow:(id)a0 hostRequester:(id)a1 sceneIdentifier:(id)a2;

- (void).cxx_destruct;
- (void)stopHosting;
- (void)modifyPresentationContext:(id /* block */)a0;

@end
