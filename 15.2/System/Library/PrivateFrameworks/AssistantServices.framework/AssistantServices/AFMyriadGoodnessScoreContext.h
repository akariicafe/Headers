@class NSSet, AFMyriadGoodnessScoreOverrideContext;

@interface AFMyriadGoodnessScoreContext : NSObject {
    AFMyriadGoodnessScoreOverrideContext *_overriddenContext;
}

@property (copy, nonatomic) NSSet *reasons;
@property (nonatomic) double mediaPlaybackInterruptedTime;

- (id)description;
- (void)setOverridingContext:(id)a0;
- (id)getOverridingContext;
- (void).cxx_destruct;
- (id)init;

@end
