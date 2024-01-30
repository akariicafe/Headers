@interface OZJSScene : NSObject <OZSceneJSExport>

@property (nonatomic) void *scene;

+ (id)sceneWithScene:(void *)a0;

- (id)initWithScene:(void *)a0;
- (id)get3DElementWithID:(unsigned int)a0;
- (id)get3DElementWithName:(id)a0;
- (id)getElementWithID:(unsigned int)a0;

@end
