@class FBSSceneTransitionContext, CHUISWidgetSceneSettings;

@interface CHUISWidgetSceneSettingsDiffContext : NSObject

@property (readonly, nonatomic) CHUISWidgetSceneSettings *prevSettings;
@property (readonly, nonatomic) CHUISWidgetSceneSettings *currSettings;
@property (readonly, nonatomic) FBSSceneTransitionContext *transitionContext;

- (id)initWithPreviousSettings:(id)a0 currentSettings:(id)a1 transitionContext:(id)a2;
- (void).cxx_destruct;

@end
