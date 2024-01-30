@class CALayer, NSString;

@interface CAMatchPropertyAnimation : CAAnimation

@property (weak) CALayer *sourceLayer;
@property unsigned long long sourceLayerRenderId;
@property unsigned int sourceContextId;
@property (copy) NSString *keyPath;
@property (getter=isAdditive) BOOL additive;

- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (unsigned int)_propertyFlagsForLayer:(id)a0;
- (void *)_copyRenderAnimationForLayer:(id)a0;
- (BOOL)_setCARenderAnimation:(void *)a0 layer:(id)a1;

@end
