@interface POPCustomAnimation : POPAnimation

@property (copy, nonatomic) id /* block */ animate;
@property (readonly, nonatomic) double currentTime;
@property (readonly, nonatomic) double elapsedTime;

+ (id)animationWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)beginTime;
- (id)_init;
- (void)_appendDescription:(id)a0 debug:(BOOL)a1;
- (BOOL)_advance:(id)a0 currentTime:(double)a1 elapsedTime:(double)a2;

@end
