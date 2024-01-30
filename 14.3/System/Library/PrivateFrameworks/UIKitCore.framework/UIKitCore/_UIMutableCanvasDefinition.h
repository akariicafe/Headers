@class UISceneSession;

@interface _UIMutableCanvasDefinition : _UICanvasDefinition {
    UISceneSession *_sceneSession;
}

@property (retain, nonatomic) Class canvasSubclass;
@property (retain, nonatomic) Class delegateClass;

- (long long)systemType;
- (id)persistentIdentifier;
- (id)userInfo;
- (void).cxx_destruct;
- (void)setUserInfo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)representedCanvas;
- (Class)delegateClass;
- (id)configuration;
- (void)setDelegateClass:(Class)a0;
- (id)role;
- (id)scene;
- (id)stateRestorationActivity;
- (id)initWithRepresentation:(id)a0;
- (void)setCanvasSubclass:(Class)a0;
- (Class)canvasSubclass;

@end
