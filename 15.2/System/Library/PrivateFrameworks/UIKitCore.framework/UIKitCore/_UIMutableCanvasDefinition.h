@class UISceneSession;

@interface _UIMutableCanvasDefinition : _UICanvasDefinition {
    UISceneSession *_sceneSession;
}

@property (retain, nonatomic) Class canvasSubclass;
@property (retain, nonatomic) Class delegateClass;

- (id)persistentIdentifier;
- (id)stateRestorationActivity;
- (id)userInfo;
- (id)configuration;
- (id)role;
- (Class)delegateClass;
- (void)setDelegateClass:(Class)a0;
- (void).cxx_destruct;
- (id)scene;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCanvasSubclass:(Class)a0;
- (id)representedCanvas;
- (long long)systemType;
- (Class)canvasSubclass;
- (id)initWithRepresentation:(id)a0;
- (void)setUserInfo:(id)a0;

@end
