@class NSArray;

@interface CDRichComplicationCurvedMeteredView : CDRichComplicationCurveView

@property (retain, nonatomic) NSArray *meterLayers;

- (void)setProgress:(double)a0;
- (void).cxx_destruct;
- (void)_updateGradient;
- (void)_setupShapeLayer:(id)a0;
- (id)_shapeStrokeColor;
- (void)colorMetersWithProgress:(double)a0;
- (id /* block */)customizeMeterLayerBlock;
- (double)rotationAngleAtProgress:(float)a0;

@end
