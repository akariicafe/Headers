@class CALayer, NSDictionary, NSString;

@interface PKMicaLayer : CALayer <PKMicaResizableView>

@property (readonly, nonatomic) CALayer *rootLayer;
@property (readonly, nonatomic) NSDictionary *publishedColorLayers;
@property (readonly, nonatomic) NSDictionary *publishedColorShapeLayers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (struct CGSize { double x0; double x1; })boundsSizeToMatchPointScale:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 package:(id)a1;
- (double)pointScaleToMatchBoundsSize:(struct CGSize { double x0; double x1; })a0;

@end
