@class UISceneSession;

@interface _UIMutableCanvasDefinition : _UICanvasDefinition {
    UISceneSession *_sceneSession;
}

@property (retain, nonatomic) Class canvasSubclass;
@property (retain, nonatomic) Class delegateClass;

- (void)setDelegateClass:(Class)a0;
- (id)representedCanvas;
- (id)persistentIdentifier;
- (id)stateRestorationActivity;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUserInfo:(id)a0;
- (id)configuration;
- (void)setCanvasSubclass:(Class)a0;
- (id)userInfo;
- (Class)delegateClass;
- (Class)canvasSubclass;
- (long long)systemType;
- (id)scene;
- (id)role;
- (id)initWithRepresentation:(id)a0;
- (void).cxx_destruct;

@end
