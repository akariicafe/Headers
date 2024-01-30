@class ATXAppOrClipLaunch;

@interface ATXHeroAndClipSessionLogSampledEvent : NSObject <ATXHeroAndClipSampledEventProtocol>

@property (retain, nonatomic) ATXAppOrClipLaunch *launch;

- (id)bundleId;
- (id)init;
- (void).cxx_destruct;
- (id)location;
- (BOOL)isClip;
- (id)initFromLaunch:(id)a0;

@end
