@class ATXAppOrClipLaunch;

@interface ATXHeroAndClipSessionLogSampledEvent : NSObject <ATXHeroAndClipSampledEventProtocol>

@property (retain, nonatomic) ATXAppOrClipLaunch *launch;

- (BOOL)isClip;
- (id)init;
- (void).cxx_destruct;
- (id)bundleId;
- (id)location;
- (id)initFromLaunch:(id)a0;

@end
