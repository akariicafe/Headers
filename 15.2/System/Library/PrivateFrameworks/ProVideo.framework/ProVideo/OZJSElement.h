@interface OZJSElement : NSObject <OZElementJSExport>

@property (nonatomic) void *element;
@property (nonatomic) float time;

+ (id)elementWithElement:(void *)a0;

- (unsigned int)ID;
- (void)setPosition:(struct SCNVector3 { float x0; float x1; float x2; })a0;
- (void)disable;
- (void)enable;
- (void)clone;
- (float)getEndTime;
- (void)setRotation:(SEL)a0;
- (void)setStartTime:(float)a0;
- (id)name;
- (id)initWithElement:(void *)a0;
- (struct SCNVector3 { float x0; float x1; float x2; })getPositionAtTime:(float)a0;
- (void)cloneAtTime:(float)a0;
- (struct SCNVector3 { float x0; float x1; float x2; })getPosition;
- (float)getStartTime;
- (id)getBehaviorWithName:(id)a0;

@end
