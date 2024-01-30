@class PVColorSpace, PVInstructionGraphSourceNode;

@interface PVCompositeDelegateContext : NSObject

@property (readonly, weak, nonatomic) PVInstructionGraphSourceNode *sourceNode;
@property (readonly, nonatomic) id preprocessData;
@property (readonly, nonatomic) PVColorSpace *renderingColorSpace;

- (id)initWithNode:(id)a0;
- (void).cxx_destruct;
- (void)setPreprocessData:(id)a0;
- (void)setRenderColorSpace:(id)a0;

@end
