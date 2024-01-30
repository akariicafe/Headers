@class NSArray;

@interface NTKRichComplicationCurvedMeteredView : NTKRichComplicationCurveView

@property (retain, nonatomic) NSArray *meterLayers;

- (void).cxx_destruct;
- (void)setProgress:(double)a0;
- (void)_updateGradient;
- (void)_setupShapeLayer:(id)a0;
- (id)_shapeStrokeColor;
- (void)colorMetersWithProgress:(double)a0;
- (double)rotationAngleAtProgress:(float)a0;
- (id /* block */)customizeMeterLayerBlock;

@end
