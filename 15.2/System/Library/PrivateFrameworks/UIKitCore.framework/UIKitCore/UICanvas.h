@class FBSScene, _UICanvasDefinition;

@interface UICanvas : UIWindowScene

@property (readonly, nonatomic, getter=_scene) FBSScene *scene;
@property (readonly, nonatomic) _UICanvasDefinition *_definition;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic, getter=isKeyCanvas) BOOL keyCanvas;


@end
