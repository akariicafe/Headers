@interface CAExternalAnimation : CAPropertyAnimation

@property (readonly) unsigned long long animId;
@property (copy) id /* block */ presentationBlock;

+ (id)animationWithKeyPath:(id)a0;

- (void *)_copyRenderAnimationForLayer:(id)a0;
- (BOOL)_setCARenderAnimation:(void *)a0 layer:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (void)setAnimId:(unsigned long long)a0;

@end
