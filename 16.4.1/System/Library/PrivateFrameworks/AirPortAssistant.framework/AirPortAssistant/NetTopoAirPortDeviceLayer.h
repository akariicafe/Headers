@interface NetTopoAirPortDeviceLayer : NetTopoObjectLayer

- (id)debugDescription;
- (void)dealloc;
- (id)description;
- (void)layoutSublayers;
- (struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; })getConnectionAttachmentLocations;
- (void)initNetTopoAirPortDeviceLayerCommonWithStyle:(int)a0 andOwningView:(id)a1;
- (id)initWithUIStyle:(int)a0 andOwningView:(id)a1;
- (void)pickCorrectImagesForContentsScale:(double)a0;
- (void)setAssociatedNode:(id)a0;

@end
