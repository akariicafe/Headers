@class BCULayerRenderer, BCUCoverEffects, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface BCUImageRenderContext : NSObject

@property (readonly, nonatomic) BCULayerRenderer *renderer;
@property (readonly, nonatomic) BCUCoverEffects *coverEffects;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSHashTable *filterOperations;

- (void).cxx_destruct;
- (id)init;
- (void)filteredImageFromImage:(struct CGImage { } *)a0 filterInfo:(id)a1 size:(struct CGSize { double x0; double x1; })a2 contentsScale:(double)a3 completion:(id /* block */)a4;

@end
