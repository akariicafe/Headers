@class NSString, CAValueFunction;

@interface CAPropertyAnimation : CAAnimation

@property (copy) NSString *keyPath;
@property (getter=isAdditive) BOOL additive;
@property (getter=isCumulative) BOOL cumulative;
@property (retain) CAValueFunction *valueFunction;

+ (id)animationWithKeyPath:(id)a0;

- (BOOL)_setCARenderAnimation:(void *)a0 layer:(id)a1;
- (unsigned int)_propertyFlagsForLayer:(id)a0;
- (BOOL)additive;
- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (BOOL)cumulative;

@end
