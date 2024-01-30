@class NSMutableArray;

@interface HKGraphSeriesSecondaryRenderContext : NSObject {
    NSMutableArray *_aboveScreenRegions;
    NSMutableArray *_belowScreenRegions;
}

- (id)init;
- (void).cxx_destruct;
- (void)addOffScreenRegionAtLocation:(double)a0 color:(id)a1 aboveScreen:(BOOL)a2;
- (void)addOffScreenRegionWithStartLocation:(double)a0 endLocation:(double)a1 color:(id)a2 aboveScreen:(BOOL)a3;
- (void)drawInAxisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backgroundColor:(id)a1 renderContext:(struct CGContext { } *)a2;

@end
