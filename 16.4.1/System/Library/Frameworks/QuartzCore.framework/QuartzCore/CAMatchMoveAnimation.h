@class CALayer, NSString, NSArray;

@interface CAMatchMoveAnimation : CAAnimation

@property (weak) CALayer *sourceLayer;
@property unsigned long long sourceLayerRenderId;
@property unsigned int sourceContextId;
@property (copy) NSString *keyPath;
@property BOOL targetsSuperlayer;
@property (copy) NSArray *sourcePoints;
@property BOOL usesNormalizedCoordinates;
@property BOOL appliesX;
@property BOOL appliesY;
@property BOOL appliesScale;
@property BOOL appliesRotation;
@property (getter=isAdditive) BOOL additive;

+ (id)defaultValueForKey:(id)a0;

- (void *)_copyRenderAnimationForLayer:(id)a0;
- (BOOL)_setCARenderAnimation:(void *)a0 layer:(id)a1;
- (unsigned int)_propertyFlagsForLayer:(id)a0;
- (BOOL)CA_validateValue:(id)a0 forKey:(id)a1;
- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;

@end
