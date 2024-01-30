@class NSString, CALayer;

@interface NTKGalleonTickView : UIView <NTKGalleonProgressSettable> {
    CALayer *_tickLayer;
}

@property (readonly, nonatomic) struct { struct { double minimum; double maximum; } widthRange; struct { double minimum; double maximum; } heightRange; } sizeRange;
@property (readonly, nonatomic) double diameter;
@property (readonly, nonatomic) unsigned long long numberOfTicks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)layerClass;
+ (id)galleon_newTickViewWithNumberOfTicks:(unsigned long long)a0 tickSizes:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a1;

- (void)setTintColor:(id)a0;
- (void).cxx_destruct;
- (void)_setTickColor:(id)a0;
- (void)galleon_setProgress:(double)a0;
- (id)initWithDialDiameter:(double)a0 numberOfTicks:(unsigned long long)a1 tickSizes:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a2;

@end
