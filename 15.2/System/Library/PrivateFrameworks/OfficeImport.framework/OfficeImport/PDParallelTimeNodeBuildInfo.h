@class PDAnimationTarget;

@interface PDParallelTimeNodeBuildInfo : NSObject

@property (retain) PDAnimationTarget *target;
@property double delay;
@property double duration;
@property int iterateType;
@property (retain) id value;

- (void).cxx_destruct;

@end
