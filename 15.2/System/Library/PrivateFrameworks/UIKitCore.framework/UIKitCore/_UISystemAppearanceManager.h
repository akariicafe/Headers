@class UIWindowScene, NSArray, UIScene, NSString;

@interface _UISystemAppearanceManager : NSObject <_UISceneComponentProviding>

@property (retain, nonatomic) UIWindowScene *windowScene;
@property (readonly, nonatomic) BOOL homeIndicatorAutoHidden;
@property (readonly, nonatomic) unsigned long long screenEdgesDeferringSystemGestures;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) long long whitePointAdaptivityStyle;
@property (readonly, nonatomic) NSArray *multitaskingDragExclusionRects;
@property (readonly, nonatomic) unsigned long long supportedInterfaceOrientations;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(id)a0;
- (void)_updateSupportedInterfaceOrientations;
- (void)updateMultitaskingDragExclusionRects;
- (void).cxx_destruct;
- (void)updateHomeIndicatorAutoHidden;
- (void)updateWhitePointAdaptivityStyle;
- (void)updateUserInterfaceStyle;
- (void)updateSupportedInterfaceOrientations;
- (void)updateScreenEdgesDeferringSystemGestures;

@end
