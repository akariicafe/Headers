@protocol CALinearMaskLayerDelegate, CALayerDelegate;

@interface CALinearMaskLayer : CALayer

@property struct CGColor { } *foregroundColor;
@property (weak) id<CALinearMaskLayerDelegate, CALayerDelegate> delegate;

+ (id)defaultValueForKey:(id)a0;

- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (void)drawInLinearMaskContext:(struct CALinearMaskContext { } *)a0;

@end
