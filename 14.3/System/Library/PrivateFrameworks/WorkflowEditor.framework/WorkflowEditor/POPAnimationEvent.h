@class NSString;

@interface POPAnimationEvent : NSObject

@property (copy, nonatomic) NSString *animationDescription;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) double time;

- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(unsigned long long)a0 time:(double)a1;
- (void)_appendDescription:(id)a0;

@end
