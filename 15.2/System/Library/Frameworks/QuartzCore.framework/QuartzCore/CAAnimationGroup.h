@class NSArray;

@interface CAAnimationGroup : CAAnimation

@property (copy) NSArray *animations;

- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (unsigned int)_propertyFlagsForLayer:(id)a0;
- (void)setDefaultDuration:(double)a0;
- (void *)_copyRenderAnimationForLayer:(id)a0;
- (void)CA_prepareRenderValue;

@end
