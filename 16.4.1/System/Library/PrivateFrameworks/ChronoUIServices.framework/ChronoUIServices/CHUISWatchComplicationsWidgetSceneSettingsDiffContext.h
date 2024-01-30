@class FBSSceneTransitionContext, CHUISWatchComplicationsWidgetSceneSettings;

@interface CHUISWatchComplicationsWidgetSceneSettingsDiffContext : CHUISWidgetSceneSettingsDiffContext

@property (readonly, nonatomic) CHUISWatchComplicationsWidgetSceneSettings *prevSettings;
@property (readonly, nonatomic) CHUISWatchComplicationsWidgetSceneSettings *currSettings;
@property (readonly, nonatomic) FBSSceneTransitionContext *transitionContext;

- (id)initWithPreviousSettings:(id)a0 currentSettings:(id)a1 transitionContext:(id)a2;

@end
