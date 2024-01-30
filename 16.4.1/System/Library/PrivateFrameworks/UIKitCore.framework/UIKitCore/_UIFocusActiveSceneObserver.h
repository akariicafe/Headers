@class UIScene;

@interface _UIFocusActiveSceneObserver : _UIFocusStateObserver {
    UIScene *_scene;
}

- (id)_initWithScene:(id)a0;
- (id)initWithScene:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)beginMonitoringContextChangesForWindow:(id)a0;
- (void)stopMonitoringContextChangesForWindow:(id)a0;

@end
