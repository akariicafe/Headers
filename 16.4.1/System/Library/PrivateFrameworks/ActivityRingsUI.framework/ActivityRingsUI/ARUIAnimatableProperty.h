@class NSMutableArray;

@interface ARUIAnimatableProperty : NSObject {
    id /* block */ _getter;
    id /* block */ _setter;
    NSMutableArray *_animations;
}

@property (retain, nonatomic) id startValue;
@property (retain, nonatomic) id endValue;
@property (retain, nonatomic) id currentValue;

- (void)update:(double)a0;
- (void).cxx_destruct;
- (BOOL)isFinishedAnimating;
- (void)addPropertyAnimation:(id)a0;
- (id)initWithGetter:(id /* block */)a0 setter:(id /* block */)a1;
- (void)removeAllPropertyAnimations;
- (void)setValueImmediate:(id)a0;

@end
