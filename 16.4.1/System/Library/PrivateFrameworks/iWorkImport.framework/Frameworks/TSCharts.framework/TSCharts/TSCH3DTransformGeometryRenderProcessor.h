@class TSCH3DDataBuffer;

@interface TSCH3DTransformGeometryRenderProcessor : TSCH3DRetargetRenderProcessor

@property (readonly, nonatomic) TSCH3DDataBuffer *buffer;

+ (id)processorWithOriginal:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)setOriginal:(id)a0;
- (id)matrix;
- (id)initWithOriginal:(id)a0;
- (void)geometry:(id)a0;

@end
