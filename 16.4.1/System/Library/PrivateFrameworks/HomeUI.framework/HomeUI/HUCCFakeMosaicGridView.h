@class NSMutableArray, HUMosaicLayoutGeometry;
@protocol HUProvidesMosaicFrames;

@interface HUCCFakeMosaicGridView : UIView

@property (retain, nonatomic) NSMutableArray *fakeCellLayers;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;
@property (weak, nonatomic) id<HUProvidesMosaicFrames> frameDelegate;
@property (retain, nonatomic) HUMosaicLayoutGeometry *mosaicLayoutGeometry;

- (void)layoutSublayersOfLayer:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
