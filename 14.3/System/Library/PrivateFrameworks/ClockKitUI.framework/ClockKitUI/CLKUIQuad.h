@class CLKUIQuadView;

@interface CLKUIQuad : NSObject

@property (nonatomic, getter=isOpaque) BOOL opaque;
@property (weak, nonatomic) CLKUIQuadView *quadView;

- (void)purge;
- (id)init;
- (void).cxx_destruct;
- (void)setupForQuadView:(id)a0;
- (void)performOffscreenPassesWithCommandBuffer:(id)a0;
- (void)renderForDisplayWithEncoder:(id)a0;
- (BOOL)prepareForTime:(double)a0;
- (void)unlinkQuadView;
- (void)encodeGLforSize:(struct CLKUIQuadSize { int x0; int x1; })a0;

@end
