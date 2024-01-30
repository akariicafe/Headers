@class BCULayerRenderer, NSHashTable, BCUCoverEffects;

@interface BCUImageRenderContext : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
}

@property (readonly, nonatomic) BCULayerRenderer *renderer;
@property (readonly, nonatomic) BCUCoverEffects *coverEffects;
@property (retain, nonatomic) NSHashTable *filterOperations;

- (id)initWithMode:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (void)filteredImageFromImage:(struct CGImage { } *)a0 filterInfo:(id)a1 size:(struct CGSize { double x0; double x1; })a2 contentsScale:(double)a3 completion:(id /* block */)a4;
- (void)filteredImageFromImage:(struct CGImage { } *)a0 filterInfo:(id)a1 size:(struct CGSize { double x0; double x1; })a2 contentsScale:(double)a3 waitForCPUSynchronization:(BOOL)a4 logKey:(id)a5 completion:(id /* block */)a6;

@end
