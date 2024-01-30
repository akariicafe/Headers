@class UIWindowScene, NSArray, UIScene, NSString;

@interface _UISystemAppearanceManager : NSObject <_UISceneComponentProviding>

@property (retain, nonatomic) UIWindowScene *windowScene;
@property (readonly, nonatomic) BOOL homeIndicatorAutoHidden;
@property (readonly, nonatomic) unsigned long long screenEdgesDeferringSystemGestures;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) long long whitePointAdaptivityStyle;
@property (readonly, nonatomic) NSArray *multitaskingDragExclusionRects;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithScene:(id)a0;
- (void)updateScreenEdgesDeferringSystemGestures;
- (void)updateHomeIndicatorAutoHidden;
- (void)updateWhitePointAdaptivityStyle;
- (void)updateMultitaskingDragExclusionRects;
- (void)updateUserInterfaceStyle;

@end
