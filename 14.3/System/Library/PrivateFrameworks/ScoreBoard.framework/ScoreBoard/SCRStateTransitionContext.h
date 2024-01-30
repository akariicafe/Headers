@interface SCRStateTransitionContext : NSObject

@property (readonly, nonatomic) unsigned long long fromState;
@property (readonly, nonatomic) unsigned long long toState;

+ (id)contextFromState:(unsigned long long)a0 toState:(unsigned long long)a1;

@end
