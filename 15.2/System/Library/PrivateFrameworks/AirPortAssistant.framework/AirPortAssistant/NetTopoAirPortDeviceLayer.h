@interface NetTopoAirPortDeviceLayer : NetTopoObjectLayer

- (void)layoutSublayers;
- (id)description;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithUIStyle:(int)a0 andOwningView:(id)a1;
- (void)pickCorrectImagesForContentsScale:(double)a0;
- (struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })getConnectionAttachmentLocations;
- (void)setAssociatedNode:(id)a0;
- (void)initNetTopoAirPortDeviceLayerCommonWithStyle:(int)a0 andOwningView:(id)a1;

@end
