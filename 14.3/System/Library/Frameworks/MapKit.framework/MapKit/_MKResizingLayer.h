@class NSArray, NSMutableArray;

@interface _MKResizingLayer : CALayer {
    NSMutableArray *_sizedLayers;
}

@property (nonatomic) BOOL needsLayoutOnBoundsChange;
@property (readonly, copy, nonatomic) NSArray *sizeToBoundsLayers;

- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setContentsScale:(double)a0;
- (void)sizeSublayerToBounds:(id)a0;
- (void)setMask:(id)a0;

@end
