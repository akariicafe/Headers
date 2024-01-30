@protocol SBFullScreenSwitcherSceneLiveContentOverlay;

@interface SBFullScreenLiveContentOverlayContext : NSObject

@property (readonly, nonatomic) long long overlayType;
@property (readonly, nonatomic) id<SBFullScreenSwitcherSceneLiveContentOverlay> overlay;

- (id)initWithOverlay:(id)a0;
- (void).cxx_destruct;

@end
