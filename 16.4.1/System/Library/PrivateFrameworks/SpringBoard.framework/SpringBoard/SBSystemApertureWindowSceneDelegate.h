@class UIWindow, NSString, SBSystemApertureCurtainWindowScene, SBSystemApertureWindowScene;

@interface SBSystemApertureWindowSceneDelegate : NSObject <UIWindowSceneDelegate> {
    SBSystemApertureWindowScene *_systemApertureWindowScene;
    SBSystemApertureCurtainWindowScene *_superHighLevelCurtainWindowScene;
}

@property (retain, nonatomic) UIWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scene:(id)a0 willConnectToSession:(id)a1 options:(id)a2;
- (void).cxx_destruct;
- (id)_associatedWindowSceneForScene:(id)a0;

@end
