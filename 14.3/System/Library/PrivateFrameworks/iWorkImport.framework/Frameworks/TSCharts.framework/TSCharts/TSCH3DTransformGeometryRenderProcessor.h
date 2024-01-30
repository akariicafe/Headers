@class TSCH3DDataBuffer;

@interface TSCH3DTransformGeometryRenderProcessor : TSCH3DRetargetRenderProcessor

@property (readonly, nonatomic) TSCH3DDataBuffer *buffer;

+ (id)processorWithOriginal:(id)a0;

- (id)matrix;
- (id)init;
- (void)dealloc;
- (void)setOriginal:(id)a0;
- (id)initWithOriginal:(id)a0;
- (void)geometry:(id)a0;

@end
