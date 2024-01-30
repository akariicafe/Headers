@class ATXAppOrClipLaunch;

@interface ATXHeroAndClipSessionLogSampledEvent : NSObject <ATXHeroAndClipSampledEventProtocol>

@property (retain, nonatomic) ATXAppOrClipLaunch *launch;

- (BOOL)isClip;
- (id)bundleId;
- (void).cxx_destruct;
- (id)init;
- (id)location;
- (id)initFromLaunch:(id)a0;

@end
