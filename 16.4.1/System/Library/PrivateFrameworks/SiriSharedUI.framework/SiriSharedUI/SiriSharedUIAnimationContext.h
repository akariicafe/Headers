@class CAMediaTimingFunction;

@interface SiriSharedUIAnimationContext : NSObject

@property (nonatomic) unsigned long long animationOptions;
@property (nonatomic) double animationDuration;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

- (void).cxx_destruct;

@end
