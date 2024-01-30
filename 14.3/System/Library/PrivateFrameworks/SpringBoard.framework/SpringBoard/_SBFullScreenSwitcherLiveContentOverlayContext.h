@protocol SBSwitcherLiveContentOverlay;

@interface _SBFullScreenSwitcherLiveContentOverlayContext : NSObject

@property (readonly, nonatomic) long long overlayType;
@property (readonly, nonatomic) id<SBSwitcherLiveContentOverlay> overlay;

- (void).cxx_destruct;
- (id)initWithOverlay:(id)a0 overlayType:(long long)a1;

@end
