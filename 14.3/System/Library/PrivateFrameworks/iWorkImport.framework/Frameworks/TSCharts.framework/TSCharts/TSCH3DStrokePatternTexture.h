@class TSDStroke;

@interface TSCH3DStrokePatternTexture : TSCH3DResource

@property (readonly, nonatomic) TSDStroke *stroke;

- (id)get;
- (void)dealloc;
- (id)initWithStroke:(id)a0;

@end
