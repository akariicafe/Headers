@interface AVPresentationConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long transitionStyle;
@property (readonly, nonatomic) double transitionDuration;

+ (id)configurationWithTransitionStyle:(unsigned long long)a0 transitionDuration:(double)a1;

@end
