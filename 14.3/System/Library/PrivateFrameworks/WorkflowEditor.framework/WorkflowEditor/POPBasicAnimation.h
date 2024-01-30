@class CAMediaTimingFunction;

@interface POPBasicAnimation : POPPropertyAnimation

@property (nonatomic) double duration;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

+ (id)animation;
+ (id)defaultAnimation;
+ (id)animationWithPropertyNamed:(id)a0;
+ (id)linearAnimation;
+ (id)easeInAnimation;
+ (id)easeOutAnimation;
+ (id)easeInEaseOutAnimation;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_initState;
- (void)_appendDescription:(id)a0 debug:(BOOL)a1;

@end
