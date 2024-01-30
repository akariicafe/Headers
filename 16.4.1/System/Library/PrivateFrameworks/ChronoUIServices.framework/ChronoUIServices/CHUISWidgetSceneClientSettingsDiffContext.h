@class CHUISWidgetSceneClientSettings, FBSSceneTransitionContext;

@interface CHUISWidgetSceneClientSettingsDiffContext : NSObject

@property (readonly, nonatomic) CHUISWidgetSceneClientSettings *prevClientSettings;
@property (readonly, nonatomic) CHUISWidgetSceneClientSettings *currClientSettings;
@property (readonly, nonatomic) FBSSceneTransitionContext *transitionContext;

- (void).cxx_destruct;
- (id)initWithPreviousClientSettings:(id)a0 currentClientSettings:(id)a1 transitionContext:(id)a2;

@end
