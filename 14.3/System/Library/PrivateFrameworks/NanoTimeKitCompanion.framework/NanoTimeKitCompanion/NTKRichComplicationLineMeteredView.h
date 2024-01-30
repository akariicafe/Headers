@class NSArray;

@interface NTKRichComplicationLineMeteredView : NTKRichComplicationLineView

@property (retain, nonatomic) NSArray *meterLayers;

- (void).cxx_destruct;
- (void)setProgress:(double)a0;
- (void)_updateGradient;
- (void)_setupShapeLayer:(id)a0;
- (id)_shapeStrokeColor;
- (struct CGPoint { double x0; double x1; })_pointAtProgress:(float)a0;
- (void)colorMetersWithProgress:(double)a0;

@end
