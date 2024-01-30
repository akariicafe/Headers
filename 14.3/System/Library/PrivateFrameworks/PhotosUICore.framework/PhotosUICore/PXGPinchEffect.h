@interface PXGPinchEffect : PXGEffect

@property (nonatomic) struct CGPoint { double x0; double x1; } normalizedCenter;
@property (nonatomic) double scale;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sampleRect;

- (id)initWithMetadataStore:(id)a0;
- (unsigned short)type;
- (int)shaderFlags;

@end
