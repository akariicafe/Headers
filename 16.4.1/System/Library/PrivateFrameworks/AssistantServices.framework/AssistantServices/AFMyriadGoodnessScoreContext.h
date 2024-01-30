@class NSSet, AFMyriadGoodnessScoreOverrideContext;

@interface AFMyriadGoodnessScoreContext : NSObject {
    AFMyriadGoodnessScoreOverrideContext *_overriddenContext;
}

@property (copy, nonatomic) NSSet *reasons;
@property (nonatomic) double mediaPlaybackInterruptedTime;
@property (nonatomic) BOOL recentlyWonBySmallAmount;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)getOverridingContext;
- (void)setOverridingContext:(id)a0;

@end
