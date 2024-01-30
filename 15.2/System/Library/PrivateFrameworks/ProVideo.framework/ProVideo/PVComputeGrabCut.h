@interface PVComputeGrabCut : NSObject {
    struct HFGrabCutInterface { void /* function */ **x0; struct HFGrabCut *x1; } *_module;
}

- (id)init;
- (void)dealloc;
- (void)reset;
- (BOOL)processImage:(id)a0 trimap:(id)a1 roi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 clusters:(int)a3 gamma:(float)a4 iterations:(int)a5 mask:(id)a6;

@end
